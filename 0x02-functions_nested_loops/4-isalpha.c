#include "main.h"
/**
* _isalpha - To checks for alphabet
* @c: Any character
*
* Return: 1 for alphabeth and 0 for Non
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		if (c > 'Z' && c < 'a')
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
