#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This function frees a listint_t list
 * and takes in a double pointer.
 * @head: The double pointer to head node in the list.
 */
void free_listint2(listint_t **head)
{
	/* create temp pointer */
	listint_t **temp;
	listint_t *temp2;

	/* initialize pointers */
	temp2 = NULL;
	temp = &temp2;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		*temp = *head;
		*head = (*head)->next;

		free(*temp);
	}
}
