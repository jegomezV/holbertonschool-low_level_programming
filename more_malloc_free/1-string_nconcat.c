#include "main.h"
/**
 * *string_nconcat - a function to concatenate
 * @s1:string 1
 * @s2:string 2
 * @n:string 3
 * Return:  pointer or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1l = 0, s2l = 0, p = 0, c = 0;
	char *ptr = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[s1l] != '\0'; s1l++)

		for (; s2[s2l] != '\0'; s2l++)

			if (n > s2l)
				ptr = malloc(sizeof(char) * s1l + s2l + 1);
			else
				ptr = malloc(sizeof(char) * s1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (p = 0; p < s1l; p++)
		ptr[p] = s1[p];

	for (c = 0; c < n && c < s2l; c++, p++)
		ptr[p] = s2[c];

	a[p] = '\0';

	return (ptr);
}
