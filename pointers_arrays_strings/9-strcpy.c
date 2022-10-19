#include "main.h"
/**
 *_strcpy - copy the string
 *@src: pointers
 *@dest: pointers
 *Return: Return
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
