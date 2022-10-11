#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - punto de entrada
*
* Return: valor de regreso
*/

	int main(void)
	{
	int n;

	n = rand() - RAND_MAX / 2;
	srand(time(0));

	if (n > 5)
	{
	printf("%i and is greater than 5", n);
	}
	if (n == 0)
	{
	printf("%i and is 0", n);
	}
	if (n < 6 && n != 0)
	{
	printf("%i and is less than 6 and not 0", n);
	}
	return (0);
}
