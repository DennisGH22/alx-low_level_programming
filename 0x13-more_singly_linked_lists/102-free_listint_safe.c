#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *runner_node, *start_node;
	size_t head_index, runner_index;

	if (h == NULL || *h == NULL)
		return (0);

	current_node = *h;
	start_node = *h;
	head_index = 0;

	while (start_node != NULL)
	{
		runner_node = *h;
		for (runner_index = 0; runner_index < head_index; runner_index++)
		{
			if (runner_node == current_node)
			{
				*h = NULL;
				return (head_index);
			}
			runner_node = runner_node->next;
		}
		current_node = start_node->next;
		free(start_node);
		start_node = current_node;
		head_index++;
	}

	*h = NULL;

	return (head_index);
}
