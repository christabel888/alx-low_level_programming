#include <unistd.h>

/**
 * _putchar - writes the comment/code
 * @c : the character to print
 *
 * return on succes 1
 * on error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
