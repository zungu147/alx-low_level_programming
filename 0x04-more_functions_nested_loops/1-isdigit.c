#include "main.h"
/**
*_isdigit - checks for digit
*@c: arg
*
*Return: 1 for digit or
*0: for non digit
*/
int _isdigit(int c)
{
	c = 48;
	if (c < 48)
	{
		return (0);
	}
	else if (c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
