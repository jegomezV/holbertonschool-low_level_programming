#include "main.h"
/**
  *print_diagonal - writes a line 
  * @n: lines
  * Return: not
  */
void print_diagonal(int n)

{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{

			for (b = 1; b <= a; b++)
			{
				if (b != a)

					putchar(' ');
				if (b == a)
				{

				putchar(92);
				putchar('\n');
				}

			}
		}
	}
	else
		putchar('\n');
}
