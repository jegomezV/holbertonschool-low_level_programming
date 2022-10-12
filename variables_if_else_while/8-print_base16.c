#include<stdio.h>

/**
*main - entry point
*Return: 0
*/
int main(void)
{
	char a = 'a';
	char word = '0';

		for (; word <= '9' ; word++)
			putchar(word);

		for (; a <= 'f' ; a++)
			putchar(a);

			putchar('\n');

return (0);
}
