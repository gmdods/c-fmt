#ifndef FMT_H
#define FMT_H

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define fmt_str "%s"
#define fmt_c "%c"
#define fmt_sz "%zu"
#define fmt_u8 "%hhu"
#define fmt_u16 "%hu"
#define fmt_u32 "%u"
#define fmt_u64 "%lu"
#define fmt_i8 "%hhi"
#define fmt_i16 "%hi"
#define fmt_i32 "%i"
#define fmt_i64 "%li"

#define fmt_formatter(ty) \
	_Generic((ty), \
	    char: fmt_c, \
	    uint8_t: fmt_u8, \
	    uint16_t: fmt_u16, \
	    uint32_t: fmt_u32, \
	    uint64_t: fmt_u64, \
	    int8_t: fmt_i8, \
	    int16_t: fmt_i16, \
	    int32_t: fmt_i32, \
	    int64_t: fmt_i64, \
	    char *: fmt_str)

#define spec(...) {__VA_ARGS__+0}

#define fmt(ty) fprintf(stdout, fmt_formatter(ty), ty)

#define fmtln fmt((char) '\n')

#endif // !FMT_H
