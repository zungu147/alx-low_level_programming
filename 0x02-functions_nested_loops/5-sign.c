#include <stdio.h>
#include "main.h"
/**
* print_sign - To print sign of number
* @n: any integer
*
* Return: 0 for 0, 1 for positive and / for negat
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
	return (0);
}
