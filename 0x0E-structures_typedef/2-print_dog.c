#include "dog.h"

/**
 * print_dog - print struct's content
 * @d: pointer to struct dog type
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name == NULL ? "(nil)" : d->name,
				d->age == NULL ? "(nil)" : d->age,
				d->owner == NULL ? "(nil)" : d->owner);
	}
}
