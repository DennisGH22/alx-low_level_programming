#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list, or
 * exit the program with status 98 if the function fails.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *tmp;

	if (head == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		tmp = current;
		current = current->next;

		if (tmp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (count);
}
