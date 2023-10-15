#include <stdio.h>
/**
*main - Entry Point
*
*Return: Always 0
*/
int main(void)
{
	int i, j;

	i = 97;
	j = '\n';

	while (i < 123)
	{
		if (i != 101)
		if (i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(j);
	return (0);
}
