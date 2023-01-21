#!/bin/bash

sbatch -N 4 -n 32 -q regular -C cpu -t 00:30:00 ./simple_run_def.sh 4 32 8 1280
sbatch -N 4 -n 64 -q regular -C cpu -t 00:30:00 ./simple_run_def.sh 4 64 16 2560
sbatch -N 4 -n 128 -q regular -C cpu -t 00:30:00 ./simple_run_def.sh 4 128 32 5120
sbatch -N 4 -n 256 -q regular -C cpu -t 00:30:00 ./simple_run_def.sh 4 256 64 10240
sbatch -N 4 -n 512 -q regular -C cpu -t 00:30:00 ./simple_run_def.sh 4 512 128 20480

sbatch -N 4 -n 32 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_naive.sh 4 32 8 1280
sbatch -N 4 -n 64 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_naive.sh 4 64 16 2560
sbatch -N 4 -n 128 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_naive.sh 4 128 32 5120
sbatch -N 4 -n 256 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_naive.sh 4 256 64 10240
sbatch -N 4 -n 512 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_naive.sh 4 512 128 20480

sbatch -N 4 -n 32 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_log.sh 4 32 8 1280
sbatch -N 4 -n 64 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_log.sh 4 64 16 2560
sbatch -N 4 -n 128 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_log.sh 4 128 32 5120
sbatch -N 4 -n 256 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_log.sh 4 256 64 10240
sbatch -N 4 -n 512 -q regular -C cpu -t 00:30:00 ./simple_run_tmpfs_log.sh 4 512 128 20480
