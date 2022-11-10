#include "dog.h"
/**
 * free_dog - the function name
 * @d:the pointer
*/
void free_dog(dog_t *d)
{
	if (d)
		free(d);
		free(d->name);
		free(d->owner);
}