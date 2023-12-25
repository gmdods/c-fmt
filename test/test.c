#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "../fmt.h"

#define UNITTEST_MAIN
#include "unittest.h"

int main(int argc, const char * argv[]) {

#include "unittest.c"

	summary();
	return 0;
}
