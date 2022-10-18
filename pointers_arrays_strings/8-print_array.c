#include "main.h"
#include <stdio.h>
/**
 *print_array - function a string
 *@a: varible
 *@n: varible
 */
void print_array(int *a, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
	if (a < n - 1)
		printf("%d, ", a[a]);
	else
		printf("%d\n", a[a]);
	}
	if (n <= 4)
		printf("\n");
}
