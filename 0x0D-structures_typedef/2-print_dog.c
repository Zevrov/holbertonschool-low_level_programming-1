#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog info
 *
 * @d: input dogs
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		if (!(d->age))
			printf("Name: (nil)\n");
		if (!(d->owner))
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
