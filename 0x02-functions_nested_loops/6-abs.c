#include "main.h"
/**
 * _abs - return absolute value
 * @n: - input char
 *
 * Return: Only positive values
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
