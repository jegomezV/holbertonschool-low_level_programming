#include "variadic_functions.h"
/**
 * print_numbers - the name function
 * @n:const
 * @separator:pointer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < (n - 1))
		{
			printf("%d%s", va_arg(numbers, int), separator);
		}

		else
		{
			printf("%d", va_arg(numbers, int));
		}
	}
	va_end(numbers);

	printf("\n");
}
