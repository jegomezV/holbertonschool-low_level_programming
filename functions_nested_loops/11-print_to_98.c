#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - the number
 *@n: number
 *Return: 0
 */
void print_to_98(int n)
{
	int a;

	for (a = n; a <= 98; a++)

	{
		printf("%d", a);
		if (a < 98)
		{
			printf(",");
			printf(" ");
		}
	}

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a > 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
