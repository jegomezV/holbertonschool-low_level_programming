#include"main.h"
/**
 * print_alphabet_x10 - 10xalpha
*/

void print_alphabet_x10(void)
{
		int n = 0;
		char L;

		while (n <= 10)
	{
		for (L = 'a' ; L <= 'z' ; L++)
		{
			_putchar(L);
		}
		n++;

		_putchar('\n');
	}


}
