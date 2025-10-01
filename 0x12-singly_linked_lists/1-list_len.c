#include "lists.h"

/**
 * list_len - function returns no. of elements in a linked list
 * @h: the linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
