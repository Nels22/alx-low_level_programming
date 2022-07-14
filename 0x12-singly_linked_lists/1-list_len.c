#include "lists.h"

/**
 * list_len - function finds the length of a linked list.
 * @h: the list whose length is to be found.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
