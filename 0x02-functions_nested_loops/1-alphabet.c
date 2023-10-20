#include <main.h>
/**
*print_alphabet - print lowercase
*
*Return: Always return (0) Success
*
*print_alphabet: To print corresponding character
*/
void print_alphabet(void)
{
	int j;

	for (j = 0; j <= 123; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
