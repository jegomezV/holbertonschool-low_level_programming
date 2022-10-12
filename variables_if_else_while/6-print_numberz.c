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
	putchar('0' + number);
	number++;
}
	putchar('\n');
	return (0);
}
