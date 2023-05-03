#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
*/

void free_listint(listint_t *head)
{
	for (; head != NULL; head = head)
	{
		head = head->next;
		free(head);
	}
}
