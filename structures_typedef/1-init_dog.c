#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - the function name
 * @d:the pointer to do the operation
 * @name:the pointer with the name
 * @age:the pointer with the dog age
 * @owner:the pointer with the owner name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d -> age = age;
		(*d).owner = owner;
	}
}
