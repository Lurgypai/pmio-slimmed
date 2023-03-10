/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#include "yaksi.h"
#include "yaksu.h"
#include <assert.h>

int yaksa_unpack_stream(const void *inbuf, uintptr_t insize, void *outbuf, uintptr_t outcount,
                        yaksa_type_t type, uintptr_t outoffset, uintptr_t * actual_unpack_bytes,
                        yaksa_info_t info, yaksa_op_t op, void *stream)
{
    int rc = YAKSA_SUCCESS;

    assert(yaksu_atomic_load(&yaksi_is_initialized));

    if (outcount == 0) {
        *actual_unpack_bytes = 0;
        goto fn_exit;
    }

    yaksi_type_s *yaksi_type;
    rc = yaksi_type_get(type, &yaksi_type);
    YAKSU_ERR_CHECK(rc, fn_fail);

    if (yaksi_type->size == 0) {
        *actual_unpack_bytes = 0;
        goto fn_exit;
    }

    yaksi_request_s *yaksi_request;
    rc = yaksi_request_create(&yaksi_request);
    YAKSU_ERR_CHECK(rc, fn_fail);
    yaksi_request_set_stream(yaksi_request, stream);

    yaksi_info_s *yaksi_info;
    yaksi_info = (yaksi_info_s *) info;

    rc = yaksi_iunpack(inbuf, insize, outbuf, outcount, yaksi_type, outoffset,
                       actual_unpack_bytes, yaksi_info, op, yaksi_request);
    YAKSU_ERR_CHECK(rc, fn_fail);

    rc = yaksi_request_free(yaksi_request);
    YAKSU_ERR_CHECK(rc, fn_fail);

  fn_exit:
    return rc;
  fn_fail:
    goto fn_exit;
}
