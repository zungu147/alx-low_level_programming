#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: - input char
 *
 * Return: - Values of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	else
		last = n % 10;
	_putchar('0' + last);
	return (last);
}
