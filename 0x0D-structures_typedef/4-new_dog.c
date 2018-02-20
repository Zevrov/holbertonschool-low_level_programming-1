#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * _strcpy - prints one char out of 2 of a string
 *
 * @dest: string value
 *
 * @src: string pointer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0, a = 0;

	while (src[counter] != '\0')
	{
		counter++;
	}
	while (a <= counter)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}

/**
 * _strlen - count the length of string
 *
 * @s: Value of input of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * new_dog - create new dog
 *
 * @name: input dog name
 *
 * @age: input dog age
 *
 * @owner: input dog owner
 *
 * Return: returns the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *c_name, *c_owner;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	c_name = malloc(_strlen(name) + 1);
	if (c_name == NULL)
	{
		free(n_dog);
		free(c_name);
		return (NULL);
	}
	c_owner = malloc(_strlen(owner) + 1);
	if (c_owner == NULL)
	{
		free(n_dog);
		free(c_owner);
		return (NULL);
	}
	c_name = _strcpy(c_name, name);
	c_owner = _strcpy(c_owner, owner);
	n_dog->name = c_name;
	n_dog->age = age;
	n_dog->owner = c_owner;
	return (n_dog);
}
