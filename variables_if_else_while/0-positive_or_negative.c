#include<stdio.h>
#include <stdlib.h>

/*
* main - punto de entrada
*
* Return: valor de regreso
*/

int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%i is negative");
	}
		if (n > 0)
	{
		printf("%i is positive");
	}
		if (n == 0)
	{
		printf("%i is zero");
	}

	return (0);
}
