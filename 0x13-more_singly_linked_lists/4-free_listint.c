#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the list.
*/

void free_listint(listint_t *head)
{
	listint_t temp_value;

	for (; head != NULL; temp_value = head)
	{
		temp_value = head->next;
		free(head);
	}
}
