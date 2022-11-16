#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given
 * parameter on each element of an array.
 *
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */

void array_iteratior(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array  || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
