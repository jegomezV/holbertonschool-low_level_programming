#include "function_pointers.h"
/**
 * array_iterator - the function name
 * @array:the array
 * @size:array dimensions
 * @action:the pointer to the function
 * Return:void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int length;

    if (array && action)

    for (length = 0; length < size; length++)
        action(array[length]);

}