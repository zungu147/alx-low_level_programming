#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: - Always 0 (Success)
 *
 */
int main(void)
{
	int a = 97;

	while (a >= 97 && a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
