#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - the function name
 * struct dog - dog data
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return:0
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * prototypes
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
