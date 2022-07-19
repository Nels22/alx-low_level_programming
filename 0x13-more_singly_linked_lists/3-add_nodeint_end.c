#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function adds node at the end of listint_t.
 * @head: pointer to the listint_t list.
 * @n: integer element inside listint_t list
 * Return: Address of the new element.
 *         or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create last node */
	listint_t *last;

	/* Create a node temp for traversing and allocate its memory */
	listint_t *temp = malloc(sizeof(listint_t));

	/* Malloc check */
	if (temp == NULL)
		return (NULL);

	/* Assign data to temp */
	temp->n = n;
	temp->next = NULL;

	/* If head is NULL, then temp node becomes head */
	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;

		/* traverse list till last node */
		while (last->next != NULL)
			last = last->next;
		/* assign temp to last node */
		last->next = temp;
	}
	return (temp);
}
