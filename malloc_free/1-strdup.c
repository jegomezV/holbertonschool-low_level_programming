#include "main.h"
/**
 * _strdup - copy a string
 * @str: string
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int a, b;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)

			ptr = malloc(sizeof(char) * (a));

	if (ptr == NULL)
		return (NULL);

	for (b = 0; str[b] != '\0'; b++)

		ptr[b] = str[b];

	return (ptr);
}
