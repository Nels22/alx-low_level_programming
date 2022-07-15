#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function frees list_t list.
 * @head: The list to be freed.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
