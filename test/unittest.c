#include <stdio.h>
#ifndef UNITTEST_MAIN
#include "unittest.h"
#include <assert.h>

#include "../fmt.h"

#endif /* ifndef UNITTEST_MAIN */

unittest("format") {
	fmt("-------------------------------------------"), fmtln;
	fmt("string is printed, then a "), fmt(42U), fmt((char) '&'), fmt(-1),
	    fmtln;
	fmt("a byte: "), fmt((uint8_t) 3), fmt(", a signed byte: "), fmt((int8_t) -4), fmtln;
	fmt("a size_t: "), fmt((size_t) 10), fmtln;
	fmt("a hex: "), fmt((uint8_t) 123, "x"), fmtln;
}
