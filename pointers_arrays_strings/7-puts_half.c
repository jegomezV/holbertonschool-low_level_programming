#include "main.h"
/**
 * puts_half - reverse string
 * @str: var
 *
*/
void puts_half(char *str)
{
	int len = 0;
	int n, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
