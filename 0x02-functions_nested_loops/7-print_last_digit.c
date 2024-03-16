#include "main.h"
/**
* Print_last_digit - To print last digit of the number
* @x: Any integer
*
* Return: The value of last digit
*/
int print_last_digit(int x)
{
	if (x >= 0)
	{
		return (x % 10);
	}
	else if (x < 0)
	{
		x = -x;
		return (x % 10);
	}
	return (0);
}
