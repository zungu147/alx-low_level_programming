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

	j = 0;
	while (j <= 122)
	{
		_putchar(j);
		j++
	}
	_putchar('\n');
	return (0);
}
