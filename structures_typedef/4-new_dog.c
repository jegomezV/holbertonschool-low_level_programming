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
	int namel, ownerl, n, o;
	dog_t *new_dog;

	namel = strlen(name);
	ownerl = strlen(owner);

		new_dog = malloc(sizeof(new_dog));
		if (new_dog == NULL)
			{
			free(new_dog);
			return (NULL);
			}

		new_dog->name = malloc(strlen(name + 1));
		if (name == NULL)
			{
			free(new_dog);
			free(name);
			return (NULL);
			}

		for (n = 0; n < namel + 1; n++)
			new_dog->name[n] = name[n];

		new_dog->owner = malloc(strlen(owner + 1));
		if (owner == NULL)
			{
			free(new_dog);
			free(name);
			free(owner);
			return (NULL);
			}

		for (o = 0; o < ownerl + 1; o++)
			new_dog->owner[o] = owner[o];

		new_dog->age = age;

	return (new_dog);
}
