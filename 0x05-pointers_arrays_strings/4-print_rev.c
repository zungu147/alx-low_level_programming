#include "main.h"
/**
*print_rev - reverse char
*
*@s: string
*
*_putchar - put char
*/
void print_rev(char *s)
{
	while (*s)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
