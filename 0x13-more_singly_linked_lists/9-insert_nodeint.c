#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - Function returns the number of elements
 * in the listint_t linked list.
 * @h: The list to print.
 * Return: The number of elements
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

/**
 * add_nodeint - Function adds a new node at the beginning of listint_t list.
 * @head: The listint_t list
 * @n: The integer element inside the listint_t list
 * Return: The address of the new element, or NULL for failure
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	return (new);
}

/**
 * insert_nodeint_at_index - Function inserts a new node
 * at a given position.
 * @head: The double pointer to the listint_t list.
 * @idx: index of the list.
 * @n: The integer
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *prev, *current;

	if (*head == NULL)
		return (NULL);

	current = *head;

	if (idx > listint_len(*head) || idx <= 0)
		return (NULL);
	else
		if (idx == 1)
		{
			new = add_nodeint(head, n);
			return (new);
		}
		else
		{
			for (i = 1; i < idx; i++)
			{
				prev = current;
				current = current->next;
			}
			new = malloc(sizeof(listint_t));
			new->n = n;
			prev->next = new;
			new->next = current;
		}

	return (new);
}
