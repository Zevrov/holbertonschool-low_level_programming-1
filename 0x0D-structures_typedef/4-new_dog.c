#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create new dog
 *
 * @name: input dog name
 *
 * @age: input dog age
 *
 * @owner: input dog owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	else
	{
		n_dog->name = name;
		n_dog->age = age;
		n_dog->owner = owner;
	}
	return n_dog;
}
