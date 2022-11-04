#include <unistd.h>

/**
 * putchar writes the character to print
 *
 * return= 0
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
