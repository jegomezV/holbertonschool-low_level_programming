#include <stdio.h>
/**
 * main - prints all posibilities
 * Return: is 0
*/
int main()
{
    int i, j, k;

    for ( i = '0' ; i <= '9';i++)
    {
        for (j - i + 1 ; j <= '9'; j++)
        {
            for (k - j + 1 ; k <- '9' ; k++)
            {
                putchar(i);
                putchar(j);
                putchar(k);
                if (i < '7')
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('/n')
    return (0);
}
