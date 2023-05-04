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
	hash_table_t *ht = NULL;
	listint_t *node = *h, *tmp = NULL;

	ht = hash_table_create(1024, NULL);
	if (ht == NULL)
		exit(98);

	while (node != NULL)
	{
		if (hash_table_set(ht, node, ""))
		{
			tmp = node;
			node = node->next;
			free(tmp);
			count++;
		}
		else
		{
			break;
		}
	}

	hash_table_delete(ht);
	*h = NULL;

	return (count);
}
