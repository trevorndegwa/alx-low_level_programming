#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: struct dog variable to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
