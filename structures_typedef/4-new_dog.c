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

	new_dog->age = age;

	for (o = 0; owner[o] != '\0'; o++)

	for (n = 0; name[n] != '\0'; n++)

	new_dog = malloc(sizeof(char) * (n + o + 1));

	if (new_dog == NULL)
	{
		free(new_dog);
		free(name);
		free(owner);
		return (NULL);
	}

	return (new_dog);
}
