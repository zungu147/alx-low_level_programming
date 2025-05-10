#include "main.h"
/**
 * print_alphabet_x10 - printlowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char f;

	while (i <= 10)
	{
		f = 'a';
		while (f <= 'z')
		{
			_putchar(f);
			f++;
		}
		_putchar('\n');
		i++;
	}
}
