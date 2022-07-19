#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - funtion frees the listint_t list.
 * @head: pointer to the list to be freed
 * Return: No return.
 */

void free_listint(listint_t *head)
{
	/* Temporary pointer to safely free the list */
	listint_t *temp;

	while (head != NULL)
	{
		/* head node is assigned to temp node */
		temp = head;

		/* make head to point to next node on list */
		head = head->next;

		/* safely free node inside of temp */
		free(temp);
	}
}
