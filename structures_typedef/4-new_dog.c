#include "dog.h"
/**
 * new_dog - name to the pointer to the new dog
 * @name:dog name
 * @age:dog age
 * @owner:dog owner
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o;
	dog_t *new_dog;

	for (o = 0; owner[o] != '\0'; o++)

	for (n = 0; name[n] != '\0'; n++)

	new_dog = malloc(sizeof(char) * (n + o + 1));

	if (new_dog == NULL)
		return (NULL);

	printf("My name is %s,and I am %f", name, age);

	return (new_dog);
}
