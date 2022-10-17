#include "main.h"
/**
 * _puts - print
 * @str: string
*/

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
