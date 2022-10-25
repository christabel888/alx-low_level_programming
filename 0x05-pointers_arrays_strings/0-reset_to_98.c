#include <stdio.h>

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:first argument to be swapped
 * @b:second argumengt to be swapped
 *
 *
 *  Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
