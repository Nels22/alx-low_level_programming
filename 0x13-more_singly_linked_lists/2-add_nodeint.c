#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - This function adds a node
 *               at the beginning of listint_t list.
 * @head: pointer to the listint_t list
 * @n: Integer element in the list.
 * Return: Address of the new element
 * or NULL if failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create new node and allocate memory to it */
	listint_t *new = malloc(sizeof(listint_t));

	/* Check if malloc failed */
	if (new == NULL)
		return (NULL);

	/* Assigne the new data */
	new->n = n;
	new->next = *head;

	/* assigning new as the head or beginning */
	*head = new;

	return (new);
}
