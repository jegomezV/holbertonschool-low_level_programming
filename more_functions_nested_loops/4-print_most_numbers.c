#include "main.h"
/**print_most_numbers - not 2 or 4
 *
 *Return: not
 */
void print_most_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
			putchar(a + '0');
	}
	putchar('\n');
}
