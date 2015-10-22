#ifndef __ERRORS_H__
#define __ERRORS_H__

enum error_codes {
  ERROR_NONE,

  ERROR_INCOMPATIBLE_OPTIONS,

  ERROR_NULL_POINTER,
  ERROR_MALLOC,

  ERROR_NO_NEIGHBORS,

  ERROR_MCOST_TOO_BIG,

  ERROR_OUTLEN_TOO_SMALL,
  ERROR_OUTLEN_TOO_BIG,

  ERROR_INLEN_TOO_SMALL, 
  ERROR_INLEN_TOO_BIG,

  ERROR_SALTLEN_TOO_SMALL, 
  ERROR_SALTLEN_TOO_BIG,

  ERROR_INVALID_COMPRESSION_METHOD,
  ERROR_INVALID_MIX_METHOD,

  ERROR_OPENSSL_HASH,
  ERROR_OPENSSL_AES,

  ERROR_BITSTREAM_UNINITIALIZED,
  ERROR_BITSTREAM_FINALIZED,
  ERROR_BITSTREAM_MAX_TOO_SMALL,

  ERROR_KECCAK,
  ERROR_BLAKE_2B,
  ERROR_ECHO

};

#endif
