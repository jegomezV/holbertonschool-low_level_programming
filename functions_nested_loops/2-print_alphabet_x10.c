#include"main.h"
/**
 * print_alphabet_x10 - 10xalpha
*/

void print_alphabet_x10(void)
{
		int n;
		char L;

		for (n = 0 ; n <= 10 ; n++)
	{
		for (L = 'a' ; L <= 'z' ; L++)
		{
			_putchar(L);
		}

		_putchar('\n');
	}


}
