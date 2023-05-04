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
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	if (head == NULL)
		return (0);

	do {
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next;

		if (fast == NULL)
			break;

		fast = fast->next;
	} while (slow != NULL && fast != NULL && slow != fast);

	if (slow == fast)
	{
		slow = head;

		while (slow != fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			count++;

			slow = slow->next;
			fast = fast->next;
		}

		printf("-> [%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	return (count);
}
