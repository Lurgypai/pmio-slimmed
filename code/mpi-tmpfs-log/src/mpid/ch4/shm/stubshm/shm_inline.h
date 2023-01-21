/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

/* ** This file is auto-generated, do not edit ** */

#ifndef SHM_INLINE_H_INCLUDED
#define SHM_INLINE_H_INCLUDED

#include <mpidimpl.h>

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_progress(int vci, int blocking)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_am_send_hdr(int rank, MPIR_Comm * comm, int handler_id,
                                                   const void *am_hdr, MPI_Aint am_hdr_sz,
                                                   int src_vci, int dst_vci)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_am_isend(int rank, MPIR_Comm * comm, int handler_id,
                                                const void *am_hdr, MPI_Aint am_hdr_sz,
                                                const void *data, MPI_Aint count,
                                                MPI_Datatype datatype, int src_vci, int dst_vci,
                                                MPIR_Request * sreq)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_am_send_hdr_reply(MPIR_Comm * comm, int src_rank,
                                                         int handler_id, const void *am_hdr,
                                                         MPI_Aint am_hdr_sz, int src_vci,
                                                         int dst_vci)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_am_isend_reply(MPIR_Comm * comm, int src_rank,
                                                      int handler_id, const void *am_hdr,
                                                      MPI_Aint am_hdr_sz, const void *data,
                                                      MPI_Aint count, MPI_Datatype datatype,
                                                      int src_vci, int dst_vci, MPIR_Request * sreq)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX MPIDIG_recv_data_copy_cb MPIDI_SHM_am_get_data_copy_cb(uint32_t attr)
{
    MPIR_Assert(0);
    return 0;
}

MPL_STATIC_INLINE_PREFIX MPI_Aint MPIDI_SHM_am_hdr_max_sz(void)
{
    MPIR_Assert(0);
    return 0;
}

MPL_STATIC_INLINE_PREFIX MPI_Aint MPIDI_SHM_am_eager_limit(void)
{
    MPIR_Assert(0);
    return 0;
}

MPL_STATIC_INLINE_PREFIX MPI_Aint MPIDI_SHM_am_eager_buf_limit(void)
{
    MPIR_Assert(0);
    return 0;
}

MPL_STATIC_INLINE_PREFIX bool MPIDI_SHM_am_check_eager(MPI_Aint am_hdr_sz, MPI_Aint data_sz,
                                                       const void *data, MPI_Aint count,
                                                       MPI_Datatype datatype, MPIR_Request * sreq)
{
    MPIR_Assert(0);
    return 0;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_rma_win_cmpl_hook(MPIR_Win * win)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_rma_win_local_cmpl_hook(MPIR_Win * win)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_rma_target_cmpl_hook(int rank, MPIR_Win * win)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_rma_target_local_cmpl_hook(int rank, MPIR_Win * win)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX void MPIDI_SHM_am_request_init(MPIR_Request * req)
{
    MPIR_Assert(0);
    return;
}

MPL_STATIC_INLINE_PREFIX void MPIDI_SHM_am_request_finalize(MPIR_Request * req)
{
    MPIR_Assert(0);
    return;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_isend(const void *buf, MPI_Aint count,
                                                 MPI_Datatype datatype, int rank, int tag,
                                                 MPIR_Comm * comm, int context_offset,
                                                 MPIDI_av_entry_t * addr, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_isend_coll(const void *buf, MPI_Aint count,
                                                  MPI_Datatype datatype, int rank, int tag,
                                                  MPIR_Comm * comm, int context_offset,
                                                  MPIDI_av_entry_t * addr, MPIR_Request ** req_p,
                                                  MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_issend(const void *buf, MPI_Aint count,
                                                  MPI_Datatype datatype, int rank, int tag,
                                                  MPIR_Comm * comm, int context_offset,
                                                  MPIDI_av_entry_t * addr, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_cancel_send(MPIR_Request * sreq)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_irecv(void *buf, MPI_Aint count, MPI_Datatype datatype,
                                                 int rank, int tag, MPIR_Comm * comm,
                                                 int context_offset, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_imrecv(void *buf, MPI_Aint count, MPI_Datatype datatype,
                                                  MPIR_Request * message)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_cancel_recv(MPIR_Request * rreq)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_part_start(MPIR_Request * req)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_pready_range(int partition_low, int partition_high,
                                                        MPIR_Request * sreq)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_pready_list(int length, int array_of_partitions[],
                                                       MPIR_Request * sreq)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_parrived(MPIR_Request * rreq, int partition, int *flag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_improbe(int source, int tag, MPIR_Comm * comm,
                                                   int context_offset, int *flag,
                                                   MPIR_Request ** message_p, MPI_Status * status)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_iprobe(int source, int tag, MPIR_Comm * comm,
                                                  int context_offset, int *flag,
                                                  MPI_Status * status)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_put(const void *origin_addr, int origin_count,
                                               MPI_Datatype origin_datatype, int target_rank,
                                               MPI_Aint target_disp, int target_count,
                                               MPI_Datatype target_datatype, MPIR_Win * win,
                                               MPIDI_winattr_t winattr)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_get(void *origin_addr, int origin_count,
                                               MPI_Datatype origin_datatype, int target_rank,
                                               MPI_Aint target_disp, int target_count,
                                               MPI_Datatype target_datatype, MPIR_Win * win,
                                               MPIDI_winattr_t winattr)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_accumulate(const void *origin_addr, int origin_count,
                                                      MPI_Datatype origin_datatype, int target_rank,
                                                      MPI_Aint target_disp, int target_count,
                                                      MPI_Datatype target_datatype, MPI_Op op,
                                                      MPIR_Win * win, MPIDI_winattr_t winattr)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_rput(const void *origin_addr, int origin_count,
                                                MPI_Datatype origin_datatype, int target_rank,
                                                MPI_Aint target_disp, int target_count,
                                                MPI_Datatype target_datatype, MPIR_Win * win,
                                                MPIDI_winattr_t winattr, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_compare_and_swap(const void *origin_addr,
                                                            const void *compare_addr,
                                                            void *result_addr,
                                                            MPI_Datatype datatype, int target_rank,
                                                            MPI_Aint target_disp, MPIR_Win * win,
                                                            MPIDI_winattr_t winattr)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_raccumulate(const void *origin_addr, int origin_count,
                                                       MPI_Datatype origin_datatype,
                                                       int target_rank, MPI_Aint target_disp,
                                                       int target_count,
                                                       MPI_Datatype target_datatype, MPI_Op op,
                                                       MPIR_Win * win, MPIDI_winattr_t winattr,
                                                       MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_rget_accumulate(const void *origin_addr,
                                                           int origin_count,
                                                           MPI_Datatype origin_datatype,
                                                           void *result_addr, int result_count,
                                                           MPI_Datatype result_datatype,
                                                           int target_rank, MPI_Aint target_disp,
                                                           int target_count,
                                                           MPI_Datatype target_datatype, MPI_Op op,
                                                           MPIR_Win * win, MPIDI_winattr_t winattr,
                                                           MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_fetch_and_op(const void *origin_addr, void *result_addr,
                                                        MPI_Datatype datatype, int target_rank,
                                                        MPI_Aint target_disp, MPI_Op op,
                                                        MPIR_Win * win, MPIDI_winattr_t winattr)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_rget(void *origin_addr, int origin_count,
                                                MPI_Datatype origin_datatype, int target_rank,
                                                MPI_Aint target_disp, int target_count,
                                                MPI_Datatype target_datatype, MPIR_Win * win,
                                                MPIDI_winattr_t winattr, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_get_accumulate(const void *origin_addr, int origin_count,
                                                          MPI_Datatype origin_datatype,
                                                          void *result_addr, int result_count,
                                                          MPI_Datatype result_datatype,
                                                          int target_rank, MPI_Aint target_disp,
                                                          int target_count,
                                                          MPI_Datatype target_datatype, MPI_Op op,
                                                          MPIR_Win * win, MPIDI_winattr_t winattr)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_barrier(MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_bcast(void *buffer, MPI_Aint count,
                                                 MPI_Datatype datatype, int root, MPIR_Comm * comm,
                                                 MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_allreduce(const void *sendbuf, void *recvbuf,
                                                     MPI_Aint count, MPI_Datatype datatype,
                                                     MPI_Op op, MPIR_Comm * comm,
                                                     MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_allgather(const void *sendbuf, MPI_Aint sendcount,
                                                     MPI_Datatype sendtype, void *recvbuf,
                                                     MPI_Aint recvcount, MPI_Datatype recvtype,
                                                     MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_allgatherv(const void *sendbuf, MPI_Aint sendcount,
                                                      MPI_Datatype sendtype, void *recvbuf,
                                                      const MPI_Aint * recvcounts,
                                                      const MPI_Aint * displs,
                                                      MPI_Datatype recvtype, MPIR_Comm * comm,
                                                      MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_scatter(const void *sendbuf, MPI_Aint sendcount,
                                                   MPI_Datatype sendtype, void *recvbuf,
                                                   MPI_Aint recvcount, MPI_Datatype recvtype,
                                                   int root, MPIR_Comm * comm,
                                                   MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_scatterv(const void *sendbuf,
                                                    const MPI_Aint * sendcounts,
                                                    const MPI_Aint * displs, MPI_Datatype sendtype,
                                                    void *recvbuf, MPI_Aint recvcount,
                                                    MPI_Datatype recvtype, int root,
                                                    MPIR_Comm * comm_ptr, MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_gather(const void *sendbuf, MPI_Aint sendcount,
                                                  MPI_Datatype sendtype, void *recvbuf,
                                                  MPI_Aint recvcount, MPI_Datatype recvtype,
                                                  int root, MPIR_Comm * comm,
                                                  MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_gatherv(const void *sendbuf, MPI_Aint sendcount,
                                                   MPI_Datatype sendtype, void *recvbuf,
                                                   const MPI_Aint * recvcounts,
                                                   const MPI_Aint * displs, MPI_Datatype recvtype,
                                                   int root, MPIR_Comm * comm,
                                                   MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_alltoall(const void *sendbuf, MPI_Aint sendcount,
                                                    MPI_Datatype sendtype, void *recvbuf,
                                                    MPI_Aint recvcount, MPI_Datatype recvtype,
                                                    MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_alltoallv(const void *sendbuf,
                                                     const MPI_Aint * sendcounts,
                                                     const MPI_Aint * sdispls,
                                                     MPI_Datatype sendtype, void *recvbuf,
                                                     const MPI_Aint * recvcounts,
                                                     const MPI_Aint * rdispls,
                                                     MPI_Datatype recvtype, MPIR_Comm * comm,
                                                     MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_alltoallw(const void *sendbuf,
                                                     const MPI_Aint * sendcounts,
                                                     const MPI_Aint * sdispls,
                                                     const MPI_Datatype sendtypes[], void *recvbuf,
                                                     const MPI_Aint * recvcounts,
                                                     const MPI_Aint * rdispls,
                                                     const MPI_Datatype recvtypes[],
                                                     MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_reduce(const void *sendbuf, void *recvbuf,
                                                  MPI_Aint count, MPI_Datatype datatype, MPI_Op op,
                                                  int root, MPIR_Comm * comm_ptr,
                                                  MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_reduce_scatter(const void *sendbuf, void *recvbuf,
                                                          const MPI_Aint * recvcounts,
                                                          MPI_Datatype datatype, MPI_Op op,
                                                          MPIR_Comm * comm_ptr,
                                                          MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_reduce_scatter_block(const void *sendbuf, void *recvbuf,
                                                                MPI_Aint recvcount,
                                                                MPI_Datatype datatype, MPI_Op op,
                                                                MPIR_Comm * comm_ptr,
                                                                MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_scan(const void *sendbuf, void *recvbuf, MPI_Aint count,
                                                MPI_Datatype datatype, MPI_Op op, MPIR_Comm * comm,
                                                MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_exscan(const void *sendbuf, void *recvbuf,
                                                  MPI_Aint count, MPI_Datatype datatype, MPI_Op op,
                                                  MPIR_Comm * comm, MPIR_Errflag_t * errflag)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_neighbor_allgather(const void *sendbuf,
                                                              MPI_Aint sendcount,
                                                              MPI_Datatype sendtype, void *recvbuf,
                                                              MPI_Aint recvcount,
                                                              MPI_Datatype recvtype,
                                                              MPIR_Comm * comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_neighbor_allgatherv(const void *sendbuf,
                                                               MPI_Aint sendcount,
                                                               MPI_Datatype sendtype, void *recvbuf,
                                                               const MPI_Aint * recvcounts,
                                                               const MPI_Aint * displs,
                                                               MPI_Datatype recvtype,
                                                               MPIR_Comm * comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_neighbor_alltoallv(const void *sendbuf,
                                                              const MPI_Aint * sendcounts,
                                                              const MPI_Aint * sdispls,
                                                              MPI_Datatype sendtype, void *recvbuf,
                                                              const MPI_Aint * recvcounts,
                                                              const MPI_Aint * rdispls,
                                                              MPI_Datatype recvtype,
                                                              MPIR_Comm * comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_neighbor_alltoallw(const void *sendbuf,
                                                              const MPI_Aint * sendcounts,
                                                              const MPI_Aint * sdispls,
                                                              const MPI_Datatype sendtypes[],
                                                              void *recvbuf,
                                                              const MPI_Aint * recvcounts,
                                                              const MPI_Aint * rdispls,
                                                              const MPI_Datatype recvtypes[],
                                                              MPIR_Comm * comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_neighbor_alltoall(const void *sendbuf,
                                                             MPI_Aint sendcount,
                                                             MPI_Datatype sendtype, void *recvbuf,
                                                             MPI_Aint recvcount,
                                                             MPI_Datatype recvtype,
                                                             MPIR_Comm * comm)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ineighbor_allgather(const void *sendbuf,
                                                               MPI_Aint sendcount,
                                                               MPI_Datatype sendtype, void *recvbuf,
                                                               MPI_Aint recvcount,
                                                               MPI_Datatype recvtype,
                                                               MPIR_Comm * comm,
                                                               MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ineighbor_allgatherv(const void *sendbuf,
                                                                MPI_Aint sendcount,
                                                                MPI_Datatype sendtype,
                                                                void *recvbuf,
                                                                const MPI_Aint * recvcounts,
                                                                const MPI_Aint * displs,
                                                                MPI_Datatype recvtype,
                                                                MPIR_Comm * comm,
                                                                MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ineighbor_alltoall(const void *sendbuf,
                                                              MPI_Aint sendcount,
                                                              MPI_Datatype sendtype, void *recvbuf,
                                                              MPI_Aint recvcount,
                                                              MPI_Datatype recvtype,
                                                              MPIR_Comm * comm,
                                                              MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ineighbor_alltoallv(const void *sendbuf,
                                                               const MPI_Aint * sendcounts,
                                                               const MPI_Aint * sdispls,
                                                               MPI_Datatype sendtype, void *recvbuf,
                                                               const MPI_Aint * recvcounts,
                                                               const MPI_Aint * rdispls,
                                                               MPI_Datatype recvtype,
                                                               MPIR_Comm * comm,
                                                               MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ineighbor_alltoallw(const void *sendbuf,
                                                               const MPI_Aint * sendcounts,
                                                               const MPI_Aint * sdispls,
                                                               const MPI_Datatype sendtypes[],
                                                               void *recvbuf,
                                                               const MPI_Aint * recvcounts,
                                                               const MPI_Aint * rdispls,
                                                               const MPI_Datatype recvtypes[],
                                                               MPIR_Comm * comm,
                                                               MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ibarrier(MPIR_Comm * comm, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ibcast(void *buffer, MPI_Aint count,
                                                  MPI_Datatype datatype, int root, MPIR_Comm * comm,
                                                  MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_iallgather(const void *sendbuf, MPI_Aint sendcount,
                                                      MPI_Datatype sendtype, void *recvbuf,
                                                      MPI_Aint recvcount, MPI_Datatype recvtype,
                                                      MPIR_Comm * comm, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_iallgatherv(const void *sendbuf, MPI_Aint sendcount,
                                                       MPI_Datatype sendtype, void *recvbuf,
                                                       const MPI_Aint * recvcounts,
                                                       const MPI_Aint * displs,
                                                       MPI_Datatype recvtype, MPIR_Comm * comm,
                                                       MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_iallreduce(const void *sendbuf, void *recvbuf,
                                                      MPI_Aint count, MPI_Datatype datatype,
                                                      MPI_Op op, MPIR_Comm * comm,
                                                      MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ialltoall(const void *sendbuf, MPI_Aint sendcount,
                                                     MPI_Datatype sendtype, void *recvbuf,
                                                     MPI_Aint recvcount, MPI_Datatype recvtype,
                                                     MPIR_Comm * comm, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ialltoallv(const void *sendbuf,
                                                      const MPI_Aint * sendcounts,
                                                      const MPI_Aint * sdispls,
                                                      MPI_Datatype sendtype, void *recvbuf,
                                                      const MPI_Aint * recvcounts,
                                                      const MPI_Aint * rdispls,
                                                      MPI_Datatype recvtype, MPIR_Comm * comm,
                                                      MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ialltoallw(const void *sendbuf,
                                                      const MPI_Aint * sendcounts,
                                                      const MPI_Aint * sdispls,
                                                      const MPI_Datatype sendtypes[], void *recvbuf,
                                                      const MPI_Aint * recvcounts,
                                                      const MPI_Aint * rdispls,
                                                      const MPI_Datatype recvtypes[],
                                                      MPIR_Comm * comm, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_iexscan(const void *sendbuf, void *recvbuf,
                                                   MPI_Aint count, MPI_Datatype datatype, MPI_Op op,
                                                   MPIR_Comm * comm, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_igather(const void *sendbuf, MPI_Aint sendcount,
                                                   MPI_Datatype sendtype, void *recvbuf,
                                                   MPI_Aint recvcount, MPI_Datatype recvtype,
                                                   int root, MPIR_Comm * comm,
                                                   MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_igatherv(const void *sendbuf, MPI_Aint sendcount,
                                                    MPI_Datatype sendtype, void *recvbuf,
                                                    const MPI_Aint * recvcounts,
                                                    const MPI_Aint * displs, MPI_Datatype recvtype,
                                                    int root, MPIR_Comm * comm,
                                                    MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ireduce_scatter_block(const void *sendbuf, void *recvbuf,
                                                                 MPI_Aint recvcount,
                                                                 MPI_Datatype datatype, MPI_Op op,
                                                                 MPIR_Comm * comm,
                                                                 MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ireduce_scatter(const void *sendbuf, void *recvbuf,
                                                           const MPI_Aint * recvcounts,
                                                           MPI_Datatype datatype, MPI_Op op,
                                                           MPIR_Comm * comm, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_ireduce(const void *sendbuf, void *recvbuf,
                                                   MPI_Aint count, MPI_Datatype datatype, MPI_Op op,
                                                   int root, MPIR_Comm * comm_ptr,
                                                   MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_iscan(const void *sendbuf, void *recvbuf, MPI_Aint count,
                                                 MPI_Datatype datatype, MPI_Op op, MPIR_Comm * comm,
                                                 MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_iscatter(const void *sendbuf, MPI_Aint sendcount,
                                                    MPI_Datatype sendtype, void *recvbuf,
                                                    MPI_Aint recvcount, MPI_Datatype recvtype,
                                                    int root, MPIR_Comm * comm,
                                                    MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_mpi_iscatterv(const void *sendbuf,
                                                     const MPI_Aint * sendcounts,
                                                     const MPI_Aint * displs, MPI_Datatype sendtype,
                                                     void *recvbuf, MPI_Aint recvcount,
                                                     MPI_Datatype recvtype, int root,
                                                     MPIR_Comm * comm_ptr, MPIR_Request ** req_p)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_rma_op_cs_enter_hook(MPIR_Win * win)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

MPL_STATIC_INLINE_PREFIX int MPIDI_SHM_rma_op_cs_exit_hook(MPIR_Win * win)
{
    int mpi_errno = MPI_SUCCESS;
    MPIR_Assert(0);
    return mpi_errno;
}

/* Not-inlined STUBSHM netmod functions */
#include "stubshm_noinline.h"

#endif /* SHM_INLINE_H_INCLUDED */
