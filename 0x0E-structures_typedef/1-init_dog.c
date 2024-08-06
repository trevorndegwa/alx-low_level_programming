#include "dog.h"

/**
 * init_dog - function to initialise variable of struct dog type
 * @d: pointer to my_dog
 * @name: string for dog's name
 * @age: dog's age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
