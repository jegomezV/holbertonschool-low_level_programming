#include "main.h"
/**
 * _islower - check a lowercase
 * description: c is lowercase? 1, if not 0
 * @c: is a searching character
 * Return: 1 if c is lowercase ad 0 if is false
*/

int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		return (0);
}
