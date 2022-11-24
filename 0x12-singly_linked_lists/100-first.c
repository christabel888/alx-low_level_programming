#include <stdio.h>
/**
 * bamin - function executed before main
 * return :0
 */

void __attribute__ ((constructor))
	bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

