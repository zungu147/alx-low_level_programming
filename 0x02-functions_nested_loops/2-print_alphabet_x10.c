#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - To print alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int i;
	char a;

	i = 0;
	a = 'a';
	while (i <= 9)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		_putchar('\n');
		i++;
	}
}
