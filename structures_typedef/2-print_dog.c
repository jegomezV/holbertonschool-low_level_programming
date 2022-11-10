#include "dog.h"
/**
 * print_dog - the funtion name
 * @d: the pointer
*/
void print_dog(struct dog *d)
{
	char *name = (*d).name;
	float age = d->age;
	char *owner = (*d).owner;

	if (d != NULL)
	{
		if (name == NULL)
			printf("Name: (nil\n)");
		else
			printf("Name: %s\n", name);

		printf("Age: %f\n", age);

		if (owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", owner);
	}
}
