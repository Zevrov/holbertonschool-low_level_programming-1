#ifndef DOG
#define DOG

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - elememts of a dog
 *
 * @name: First member
 *
 * @age: Second member
 *
 * @owner: Third member
 *
 * Description: input name for the dog and age also the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
