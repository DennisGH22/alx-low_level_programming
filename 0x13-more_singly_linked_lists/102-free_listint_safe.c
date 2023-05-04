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
	size_t count;
	listint_t *temp;

	for (count = 0; *h != NULL && count < 1024; count++)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
	}

	if (count >= 1024)
	{
		*h = NULL;
		exit(98);
	}

	return (count);
}
