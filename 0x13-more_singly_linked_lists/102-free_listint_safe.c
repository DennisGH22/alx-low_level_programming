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
    size_t count = 0;
	listint_t *tmp, *visited[1024];

	if (h == NULL || *h == NULL)
		return (count);

	while (*h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		count++;

		if ((size_t)*h > 1023)
			break;

		visited[(size_t)*h] = *h;
	}

	return (count);
}
