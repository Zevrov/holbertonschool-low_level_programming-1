#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initailize typedef dog
 *
 * @d: input dogs
 *
 * @name: input name of dog
 *
 * @age: input age of dog
 *
 * @owner: input owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
