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
	listint_t *current, *runner, *head;
	size_t current_index, runner_index;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	head = *h;
	current_index = 0;

	while (head != NULL)
	{
		runner = *h;
		for (runner_index = 0; runner_index < current_index; runner_index++)
		{
			if (runner == current)
			{
				*h = NULL;
				return (current_index);
			}
			runner = runner->next;
		}
		current = head->next;
		free(head);
		head = current;
		current_index++;
	}

	*h = NULL;

	return (current_index);
}
