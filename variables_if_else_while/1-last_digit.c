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
	int n; //98

	n = rand() - RAND_MAX / 2; //98
	srand(time(0));

	if (n % 10 && n > 5) //98

	printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);

	else if (n % 10 == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}
	else
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
