#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - Function prints the length of listint_t list.
 * @h: list whose length is to be printed.
 *
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
