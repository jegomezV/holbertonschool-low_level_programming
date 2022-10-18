#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 *
 */
void rev_string(char *s)
{

	char *texto;
	int posicionfinal;

	if (posicionfinal < 0)
	{
		return;
	}
	else
	{
		int aux = *(texto);
		*(texto) = *(texto + posicionfinal);
		*(texto = posicionfinal) = aux;
		invertirtexto(texto + 1, posicionfinal - 2);
	}

	char *s;
	invertirtexto(texto, 9);
	putchar(s + '0');

	return (0);
}
