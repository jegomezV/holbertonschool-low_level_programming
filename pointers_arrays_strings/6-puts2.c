#include "main.h"

void puts2(char *str)
{

	int i = 0,
		len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
