#include "main.h"
/**
*_strlen - count length of string
*
*@s: pointer pointing to char
*
*Return: int len
*/
int _strlen(char *s);
{
	int len = 0;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
		len++;
	}
	return (len);
}
