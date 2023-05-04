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

	if (h == NULL)
		return (count);

	while (*h != NULL)
	{
		listint_t *tmp = (*h)->next;

		free(*h);
		*h = tmp;
		count++;

		if (*h == *h->next)
		{
			*h = NULL;
			count++;
			break;
		}
	}

	return (count);
}
