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
    size_t size = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (size);

	for (current = *h; current; current = next)
	{
		next = current->next;
		free(current);
		size++;

		if (current <= next)
			break;
	}

	*h = NULL;
	return (size);
}
