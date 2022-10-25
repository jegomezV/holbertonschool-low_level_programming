#include "main.h"

/**
 *factorial - function of a given number
 *@n: numbers
 *Return:pointers
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
