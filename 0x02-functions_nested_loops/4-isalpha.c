#include "main.h"
/**
 * _isalpha - checks for letters
 * @c: - char input
 *
 * Return: - 1 for letters or otherwise return 0
 *
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
