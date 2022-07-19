#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - This function deletes the head node of listint_t
 * linked list, and returns the head node's data.
 * @head: A pointer to listint_t.
 * Return: The head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/* if head node is NULL, return NULL */
	if (*head == NULL)
		return (0);

	/* set temp to point to what head is pointing to */
	temp = *head;

	/* copy head values to temp values */
	*head = (*head)->next;
	n = temp->n;

	free(temp);

	return (n);
}
