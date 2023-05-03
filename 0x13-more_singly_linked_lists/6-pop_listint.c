#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: A pointer to the first node of the list.
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp_value;

	if (*head == NULL)
		return 0;

	data = (*head)->n;
	temp_value = (*head)->next;
	free(*head);
	*head = temp_value;

	return (data);
}
