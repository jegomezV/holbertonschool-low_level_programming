#include <stdio.h>
#include <string.h>

/**
 *print_rev - reverse
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = (s) -1 ; i >= 0 ; i--)
	{
		putchar(s[i]);
	}
}
