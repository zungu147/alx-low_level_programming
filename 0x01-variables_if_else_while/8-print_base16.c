#include <stdio.h>
/**
*main - Entry point of the program
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;

	i = 48;
	k = 97;
	j = '\n';

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (k <= 102)
	{
		putchar(k);
		k++;
	}
	putchar(j);
	return (0);
}
