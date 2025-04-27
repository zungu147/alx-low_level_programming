#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - Func to print
 *
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
