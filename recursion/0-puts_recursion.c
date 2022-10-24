#include "main.h"

void _puts_recursion(char *s)
{
	for (int index = 0; s[index] != '\0'; index++)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
