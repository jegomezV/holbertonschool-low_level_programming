#include "function_pointers.h"
/**
 * int_index - the function name
 * @array:the array
 * @size:length
 * @cmp:the pointer to the function
 * Return:-1 or ptr
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int elements, size1 = size;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (elements = 0; elements < size1; elements++)
			if (cmp(array[elements]))
				return (elements);
	}
	return (-1);
}
