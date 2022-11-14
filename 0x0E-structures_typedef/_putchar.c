#include <unistd.h>

/**
 * putchar writes character to stdout
 * @c: the character to print
 *
 * return: 0 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
