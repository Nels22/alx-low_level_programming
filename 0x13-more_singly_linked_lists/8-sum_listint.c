#include "lists.h"

/**
 * sum_listint - Function returns the sum of all nodes in listint_t.
 * @head: Pointer to the linked list.
 * Return: The sum of all the integer data of the list.
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
