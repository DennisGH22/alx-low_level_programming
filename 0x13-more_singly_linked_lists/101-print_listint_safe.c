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
	const listint_t *temp;
    size_t count, i;

    count = 0;
    for (temp = head; temp != NULL; temp = temp->next)
        count++;

    printf("-> [%p] %d\n", (void *)head, head->n);
    for (i = 1, temp = head->next; temp != NULL; i++, temp = temp->next)
    {
        printf("-> [%p] %d\n", (void *)temp, temp->n);
        if (temp <= head)
        {
            printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
            printf("-> [%p] %d\n", (void *)temp, temp->n);
            exit(98);
        }
    }

    return (count);
}
