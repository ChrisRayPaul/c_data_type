#include "test.h"

#define TEST_EN	1

int main()
{
#ifdef TEST_EN
	test();
#else

#endif // TEST_EN

	return 0;
}