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
		printf("%d is negative");
	}
		if (n > 0)
	{
		printf("%dis positive");
	}
		if (n == 0)
	{
		printf("%dis zero");
	}

	return (0);
}
