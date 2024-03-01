#include "main.h"
/**
* _islower - checks for lowercase
* @i: - input parameter
*
* Return: 1 for lowercase and 0 for None lowercase
*/
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
