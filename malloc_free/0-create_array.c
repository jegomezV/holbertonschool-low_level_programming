#include "main.h"
/**
 * create_array - function name
 * @size: size
 * @c: character
 * Return: NULL - arr
*/

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		arr[x] = c;

	return (arr);
}
