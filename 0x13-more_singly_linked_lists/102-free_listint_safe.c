#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
*/

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	for (current = *h; current != NULL; current = temp)
	{
		size++;
		temp = current->next;
		free(current);

		if (temp >= current)
		{
			*h = NULL;
			exit(98);
		}
	}

	*h = NULL;

	return (size);
}
