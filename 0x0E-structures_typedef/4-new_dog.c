#include "dog.h"

/**
 * _strcpy - copy string src to destination
 * @src: source buffer
 * Return: pointer to copied string
 */

char *_strcpy(char *src)
{
	char *dest;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		;
	}

	dest = malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 * Return: pointer to copy on success or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(dog_t);
	if (doggy == NULL)
		return (NULL);

	doggy->name = _strcpy(name);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = _strcpy(owner);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->age = age;

	return (doggy);
}
