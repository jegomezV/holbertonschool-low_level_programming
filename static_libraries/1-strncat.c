#include "main.h"
/**
 * _strncat - a function
 * @dest: pointer.
 * @src:2 pointer
 * @n: number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int a = 0;
	int b = 0;

	a = strlen(dest);
	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
		{
			break;
		}
	}

	return (dest);
}
