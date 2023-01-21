# Noncontig Benchmark

## Prerequisites:

- Requires built and installed MPICH implementations for all of DRAM, PM buffer (with flush), and PM buffer (without flush) methods.

    Use the ``build_n_install.sh`` script provided in the project MPICH repository to do this (each method implementation is on a separate branch, see the repository for more details).

    After installation, directory structure should look like, possibly with more files/directories:

    ```
    .
    ├── bin
    │   ├── mpicc
    │   ├── mpichversion
    │   ├── mpiexec
    │   ├── mpivars
    │   └── parkill
    ├── include
    │   └── ...
    ├── lib
    │   └── ...
    └── share
        └── ...
    ```

- Requires environment variables ``MPICH_REG_INSTALL_DIR`` and ``MPICH_PM_INSTALL_DIR`` to be set, each corresponding to location where the DRAM and PM buffer approaches are installed.

    Example in **~/.bashrc** file (note the use terminating ``/`` on each):

    ``export MPICH_REG_INSTALL_DIR=/home/alex/collective_io/install_reg/``
    ``export MPICH_PM_INSTALL_DIR=/home/alex/collective_io/install_pm/``

- Requires:
    - MPICH DRAM approach installed in **${MPICH_REG_INSTALL_DIR}current/**
    - MPICH PM (with flush) approach installed in **${MPICH_PM_INSTALL_DIR}pmncnf/**
    - MPICH DRAM approach installed in **${MPICH_PM_INSTALL_DIR}pmncnf_no_persist/**

## Details on Files/Directories

- **benchmark_outputs/**: directory for outputs of benchmark logs and data

- **graphs/**: directory for graph outputs when running *generate_graphs.py*

- **debug_rank.sh**: script used to debug a single process in MPI program development.

    Usage: ``mpiexec MPI_ARGS path/to/debug.sh RANK_TO_DEBUG PROGRAM_TO_DEBUG PROGRAM_ARGS``

- **generate_graphs.py**: Program to generate execution time and write bandwidth graphs. Requires output in form consistent with that from **noncontig** program. For usage, run ``python generate_graphs.py -h``

- **Makefile**: Build recipe. Requires MPICC and PM_DEFINE environment variables, where MPICC is the MPI compiler used and PM_DEFINE is either nonexistent (to not compile with PM support) or set to ``"-DUSE_PM=1"`` (passed as PREPROCESSOR define to compiler)

- **noncontig.c**, **parse_cmdline.c**: Benchmark program, modified to support persistent memory testing.

- **run_benchmark.sh**: Shell script to run benchmarks using either contiguous memory or non-contiguous memory for one of either DRAM buffer, PM buffer (with flush), or PM buffer (without flush).

    Usage: ``./run_benchmark.sh COLL_WRITE_TYPE BENCHMARK OUTPUT_FILE_PREFIX``

    ``COLL_WRITE_TYPE`` is one of "dram", "pmncnf", "pmncnf_no_persist"

    ``BENCHMARK`` is one of "cmem_ncfile" or "ncmem_ncfile"

    ``OUTPUT_FILE_PREFIX`` specifies the prefix of both the log and data files written to **benchmark_outputs/**
