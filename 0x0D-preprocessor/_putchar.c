#include <unistd.h>

/**
 * putchar writes characters to stdout
 * @c: character to print
 *
 * return print success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
