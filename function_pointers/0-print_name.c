#include "function_pointers.h"
/**
 * print_name - function name
 * @f: the pointer
 * @name: the name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
    if (f != NULL)
        *f = (name);
}
