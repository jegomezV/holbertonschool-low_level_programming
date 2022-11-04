#include "main.h"
/**
 * array_range - the funtion name
 * @min: var1
 * @max: var2
 * Return: the pointer
*/
int *array_range(int min, int max)
{
	int *ptr;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; min <= max; a++, min++)
	{
		ptr[a] = min;
	}

	return (ptr);
}
