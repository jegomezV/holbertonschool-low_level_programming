#include "main.h"
#include <string.h>
/**
 * _strlen - sting long
 * @s: var
 * Return: 0
 */

int _strlen(char *s)
{

	char *s;
	int contador = 0;

	while (cadena[contador] != 0)
	{
		contador++;
	}
	printf("La longitud de '%s' es %d", s, contador);

	return (0);

}
