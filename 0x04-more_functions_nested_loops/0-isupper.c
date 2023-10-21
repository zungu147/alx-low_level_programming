#include "main.h"
/**
*_isupper - checks for uppercase
*@c -correspond ASCII
*
*Return: 1 for uppercase or
*0: for non
*/
int _isupper(int c)
{
	int c = 65;

	if (c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
