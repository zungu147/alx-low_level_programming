#include <stdio.h>
#include "main.h"
/**
* print_alphabet - To print lower case
*
* main - Entry point
* Return: Always zero;
*/
void print_alphabet(void)
{
	char ch;
	char n;

	ch = 'a';
	n = '\n';
	while (ch >= 'a' && ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar(n);
}
