#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: - Always 0
 *
 */
int main(void)
{
	int upper = 65;
	int lower = 97;

	while (lower >= 97 && lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper >= 65 && upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar(10);
	return (0);
}
