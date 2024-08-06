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

/**
 * struct dog - data type to change with typedef
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * dog_t - typedef for struct dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
