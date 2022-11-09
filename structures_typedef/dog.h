#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog data
 * @d:the pointer to do the operation
 * @name:the pointer with the name
 * @age:the pointer with the dog age
 * @owner:the pointer with the owner name
 * Return:0
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
