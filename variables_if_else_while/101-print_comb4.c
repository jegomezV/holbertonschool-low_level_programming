#include <stdio.h>
/**
 * main - prints all posibilities
 * Return: is 0
 */
int main(void)
{
	int basic, number, month;

	for (basic = '0' ; basic <= '9'; basic++)
	{
		for (number = basic + 1; number <= '9'; number++)
		{
			for (month = number + 1; month <= '9'; month++)
			{
				putchar(basic);
				putchar(number);
				putchar(month);
				if (basic < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
