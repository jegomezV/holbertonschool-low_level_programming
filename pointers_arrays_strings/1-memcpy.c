#include "main.h"
/**
 * _memcpy - copy bytes
 * @dest: pointer 1
 * @src:pointer 2
 * @n:bytes
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
