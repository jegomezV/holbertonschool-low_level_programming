#include "main.h"
/**
 * print_last_digit - print 
 * @n: result
 * Return: the var
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;


	if (n < 0)
	{
		last = last * -1;
		_putchar(last + '0');
	}

		else
		_putchar(last + '0');
	return (last);
}
