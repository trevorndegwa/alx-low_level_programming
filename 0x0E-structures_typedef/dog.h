#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - new data type representing dog
 * @name: string for dog's name
 * @age: float representing dog's age
 * @owner: string representing owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
