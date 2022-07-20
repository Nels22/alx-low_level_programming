#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained
 *                     in a listint_t linked list.
 * @head: Pointer to the head of the listint_t list
 *
 * Return: If there is no loop - NULL.
 *         otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lion, *lamb;

	if (head == NULL || head->next == NULL)
		return (NULL);

	lion = head->next;
	lamb = (head->next)->next;

	while (lamb)
	{
		if (lion == lamb)
		{
			lion = head;

			while (lion != lamb)
			{
				lion = lion->next;
				lamb = lamb->next;
			}

			return (lion);
		}
		lion = lion->next;
		lamb = (lamb->next)->next;
	}
	return (NULL);
}
