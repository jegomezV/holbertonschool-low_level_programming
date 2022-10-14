#include "main.h"
/**
 * more_numbers - Prototy
 * Return: no R
*/

void more_numbers(void)
{
int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)

				putchar(b / 10 + '0');

			putchar(b % 10 + '0');

		}

		putchar('\n');
	}

}
