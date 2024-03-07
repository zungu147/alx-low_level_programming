#include "main.h"
/**
* _abs - print absolute value
* @n: Any integer
*
* Return: Always positive
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
