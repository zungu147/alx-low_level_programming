#include "main.h"
/**
*_strlen - count length of string
*@s - pointer pointing to char
*Return: int len
*/
int _strlen(char *s);
{
	int len = 0;

	while (*s != '\0')
	{
		*s++;
		*len++;
	}
	return (len);
}
