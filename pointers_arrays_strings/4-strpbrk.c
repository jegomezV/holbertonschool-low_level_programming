#include "main.h"

/**
 *_strpbrk - string
 *@s: pointers
 *@accept: pointers
 *Return: \0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0; s[i]; i++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (s[i] == accept[x])
			{
				break;
			}
		}
		if (s[i] == accept[x])
		{
			return (s + i);
		}
	}
	return ('\0');
}
