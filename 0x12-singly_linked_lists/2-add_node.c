#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: pointer to pointer to head of list
 * @str: string to duplicate and store in new node
 *
 * Return: address of a new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	/* calculate string length manually */
	while (str[len])
		len++;

	new->len = len;
	new->next = *head; /* point new node to current head */
	*head = new; /* update head to new node */

	return (new);
}
