#include <stdio.h>
/**
*main - Entry point of program
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;

	for (i = 48; i <= 57;)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
