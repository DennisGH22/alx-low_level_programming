#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer that points to the first node of the list. 
 * @str: The string to be duplicated.
 *
 * Return: The address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = malloc(strlen(str) + 1);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->str, str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
