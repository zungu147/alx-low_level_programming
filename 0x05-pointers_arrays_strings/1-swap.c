#include "main.h"
/**
*swap_int - To swap two intergers
*@a: integer
*@b: integer
*Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
