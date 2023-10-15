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
	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(j);
	return (0);
}
