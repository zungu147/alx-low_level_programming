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
	int i;
	for (i = strlen(s) - 1; i >= 0; i--)
	{
	        _putchar(s[i]);
	}
	_putchar('\n');
}
