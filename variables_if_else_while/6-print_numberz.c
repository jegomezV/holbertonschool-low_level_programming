#include<stdio.h>
/**
*main - entry point
*Return:0
*/
	int main(void)
	{
	int number = 0;

	while (number < 10)
{
	number++;
	putchar('0' + number);
}
	putchar('\n');
	return (0);
}
