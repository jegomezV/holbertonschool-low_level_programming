#include "main.h"
/**
 *print_array - function a string
 *@a: varible
 *@n: varible
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
	if (i == 0)
		printf("%d", a[i]);
	else
		printf(", %d", a[i]);
	}
		printf("\n");
}
