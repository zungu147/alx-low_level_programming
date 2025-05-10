#include "main.h"
/**
 * print_sign - checks for positive, neg and zero
 * @n: - character input
 *
 * Return: 1 for > 0, 0 for zero and -1 for < 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);		
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
