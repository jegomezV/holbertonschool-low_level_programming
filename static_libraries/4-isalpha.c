#include "main.h"
/**
 * _isalpha - checks on a alphabetic character
 * @c: the character to find
 * Return: if find a c 1, else 0
*/
int _isalpha(int c)
{

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
		else
		return (0);
}
