#include "dog.h"
/**
 * new_dog - name to the pointer to the new dog
 * @name:dog name
 * @age:dog age
 * @owner:dog owner
 * Return: new_dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o;
	dog_t *new_dog;

	for (o = 0; owner[o] != '\0'; o++)

	for (n = 0; name[n] != '\0'; n++)

	new_dog = malloc(sizeof(char) * (n + o + 1));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	printf("My name is %s, I am %f, and my owner is %s\n", name, age, owner);

	return (new_dog);
}
