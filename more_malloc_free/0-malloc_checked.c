#include "main.h"
/**
 * *malloc_checked - a function name
 * @b: a number
 * Return: the pointer
*/
void *malloc_checked(unsigned int b)
{
int *ptr = 0;

ptr = malloc(b);
if (ptr == NULL)
	exit(98);

return (ptr);
}
