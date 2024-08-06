#include "dog.h"

/**
 * free_dog - function frees dogs
 * @d: pointer to dog_t d
 * return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
