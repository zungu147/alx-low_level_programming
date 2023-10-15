#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0
*/
int main(void)
{
	int i, j;

	j = '\n';
	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(j);
	return (0);
}
