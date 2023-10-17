#include "main.h"

/**
*_puts - print characters
*
*_putchar - put char
*
*@str: string to print
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
