#ifndef UNITTEST_MAIN
#include "unittest.h"
#include <assert.h>

#include "../fmt.h"

#endif /* ifndef UNITTEST_MAIN */

unittest("format") {
	puts("-------------------------------------------");
	fmt("string is printed, then a "), fmt(42U), fmt((char) '&'), fmt(-1);
	fmt((char) '\n');
}
