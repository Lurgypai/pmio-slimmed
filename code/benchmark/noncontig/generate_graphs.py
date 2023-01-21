import argparse
import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt


parser = argparse.ArgumentParser(
    description='Program to graph PM-based collective IO benchmarks')
parser.add_argument('save_file_prefix', type=str, help='Prefix of file to save figure to.')
parser.add_argument('data_files', nargs='+', type=str, help='Input data file (csv).')
args = parser.parse_args()

# --- Data preprocessing ---
dfs = [pd.read_csv(file_name) for file_name in args.data_files]

for (df, data_file) in zip(dfs, args.data_files):
    if "dram" in data_file:
        method = "DRAM"
    elif "no_persist" in data_file:
        method = "PMEM, No flush"
    else:
        method = "PMEM"

    df["Buffer Method"] = method

df = pd.concat(dfs, ignore_index=True)


# --- Graph data ---
sns.set_theme()

# Graph execution time
graph = sns.lineplot(
            data=df,
            x="nprocs",
            y="w_time_max",
            hue="Buffer Method",
            style="Buffer Method"
        )

# Set graph labels, ticks, etc.
x_ticks = df["nprocs"].unique()
x_ticks = np.sort(x_ticks)
graph.set_xticks(x_ticks)

graph.set_xlabel("Num MPI Procs")
graph.set_ylabel("Execution Time (s)")

plt.savefig("graphs/" + args.save_file_prefix + "_exec_time")
plt.clf()

# Graph throughput
graph = sns.lineplot(
            data=df,
            x="nprocs",
            y="w_acc_bw",
            hue="Buffer Method",
            style="Buffer Method"
        )

# Set graph labels, ticks, etc.
graph.set_xticks(x_ticks)

graph.set_xlabel("Num MPI Procs")
graph.set_ylabel("Write Bandwidth (MB/s)")

plt.savefig("graphs/" + args.save_file_prefix + "_write_bandwidth")