#include "main.h"
/**
 * print_square - Print a square with # symbol.
 *@size: to prove
 * Return: void function not have return.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar(35);
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
