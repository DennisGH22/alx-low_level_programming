#include "lists.h"

/**
 * free_listint2 - Sets the head to NULL.
 * @head: A pointer to the first node of the list.
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL)
		return;

	for (current_node = *head; current_node != NULL; current_node = next_node)
	{
		next_node = current_node->next_node;
		free(current_node);
	}

	*head = NULL;
}
