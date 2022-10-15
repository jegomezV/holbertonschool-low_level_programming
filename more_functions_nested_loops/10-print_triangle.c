#include "main.h"
/**
 * print_triangle - triangle...
 *@size: value
 * Return: no return
 */
void print_triangle(int size)
{

	int sym;
	int a;
	int b = 1;

	for (a = size; a >= 1; a--)
	{
		for (sym = size; sym >= 1; sym--)
		{
			if (b >= sym)
				_putchar('#');
			else
				_putchar(' ');
		}
		b++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
