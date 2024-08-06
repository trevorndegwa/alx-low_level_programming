#include "dog.h"

/**
 * _strlen - returns length of string
 * @str: string to be evaluated
 * Return: length of string without null character
 */
int _strlen(char *str)
{
	int len;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copy string from src to dest
 * @dest: buffer storing copy of string from src
 * @src: string to copy
 * Return: copied string dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - function creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: onwer's name
 * Return: pointer to new dog or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcpy(doggy->owner, owner);

	return (doggy);
}
