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
	unsigned int l = 0, a = 0, p = 0, c = 0;
	char *ptr = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)

	for (a = 0; s2[a] != '\0'; a++)

	if (n > a)
	{
		ptr = malloc((l + 1 + a) * sizeof(char));
	}
	else
	{
		ptr = malloc((l + 1 + n) * sizeof(char));
	}

	if (ptr == NULL)
		return (NULL);

	for (p = 0; p < l; p++)
		ptr[p] = s1[p];

	for (c = 0; c < n && c < a; c++, p++)
		ptr[p] = s2[c];

	ptr[p] = '\0';

	return (ptr);
}
