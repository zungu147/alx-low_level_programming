#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 97;

	if (i != 101 && i != 113)
	{
		while (i >= 122)
		{
			putchar(i);
			i++;
		}
	}
	putchar(10);
	return (0);
}
