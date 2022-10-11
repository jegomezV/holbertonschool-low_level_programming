#include<stdio.h>
/**
*main - entry point
*Return: 0
*/
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	for (; alpha <= 'z' ; alpha++)
	{
	putchar(alpha);
	putchar('\n');
	}
	for (; ALPHA <= 'Z' ; ALPHA++)
	{
	putchar(ALPHA);
	putchar('\n');
	}
	return (0);
}
