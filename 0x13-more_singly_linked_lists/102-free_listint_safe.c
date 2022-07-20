#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique nodes.
 *                        in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: If the list is not looped - 0.
 *         otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *lion, *lamb;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lion = head->next;
	lamb = (head->next)->next;

	while (lamb)
	{
		if (lion == lamb)
		{
			lion = head;
			while (lion != lamb)
			{
				nodes++;
				lion = lion->next;
				lamb = lamb->next;
			}
			lion = lion->next;
		while (lion != lamb)
		{
			nodes++;
			lion = lion->next;
		}
		return (nodes);
		}
		lion = lion->next;
		lamb = (lamb->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely
 *                     (i.e. can free lists containing loops)
 * @h: A pointer to the address
 *     of the head of the listint_t list.
 *
 * Return: The size of the list to be freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}
	h = NULL;

	return (nodes);
}
