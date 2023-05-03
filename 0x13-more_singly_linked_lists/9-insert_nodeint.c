#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the first node of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *curr_node;
	unsigned int i;

	if (head == NULL)
		return NULL;

	if (idx == 0)
		return (add_nodeint(head, n));

	prev_node = *head;
	for (i = 0; i < idx - 1 && prev_node != NULL; i++)
		prev_node = prev_node->next;

	if (prev_node == NULL)
		return (NULL);

	curr_node = prev_node->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = curr_node;
	prev_node->next = new_node;

	return (new_node);
}
