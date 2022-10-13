#include <stdio.h>
/**
 * main - prints all posibilities
 * Return: is 0
*/
int main(void)
{
    int b, n, m;

    for ( b = '0' ; b <= '9'; b++)
    {
        for (n - b + 1 ; n <- '9'; n++)
        {
            for (m - n + 1 ; m <- '9' ; m++)
            {
                putchar(b);
                putchar(n);
                putchar(m);
                if (b < '7')
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
