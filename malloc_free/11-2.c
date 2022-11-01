#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)

	for (b = 0; s2[b] != '\0'; b++)
	{
	}
		ptr = malloc(sizeof(char) * a + b + 1)

	for (c = 0; s1[c] != '\0'; c++)
		ptr[c] = s1[c];

	for (d = 0; s2[d] != '\0'; d++)
		ptr[d + a] = s2[d];

		return (ptr);
}