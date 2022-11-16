#include <stdlib.h>
#include "function_pointers.h"

/**
 * ptin_name: prints name
 * @name: name to print
 * @f: pointer to printing function
 */

void print_name(char *name, void(*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
