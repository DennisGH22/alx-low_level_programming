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
	const listint_t *current, *runner;
	size_t c_i, r_i;

	current = head;
	c_i = 0;

	while (current != NULL)
	{
		runner = head;
		for (r_i = 0; r_i < c_i; r_i++)
		{
			if (runner == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (c_i);
			}

			runner = runner->next;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		c_i++;
	}

	return (c_i);
}
