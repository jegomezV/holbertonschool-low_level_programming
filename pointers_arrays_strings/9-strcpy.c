#include "main.h"
/**
 *_strcpy - copy the string
 *@src: pointers
 *@dest: pointers
 *Return: Return
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != src[i-1]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
