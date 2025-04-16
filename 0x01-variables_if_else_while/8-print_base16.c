#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: - Always 0
 *
 */
int main(void)
{
	int i = 48;
	int j = 'a';

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
	putchar(j);
	j++;
	}
	putchar(10);
	return (0);
}
