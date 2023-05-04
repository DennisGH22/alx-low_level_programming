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
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return (0);

    for (current = *h; current != NULL; current = temp)
    {
        count++;
        temp = current->next;
        free(current);

        if (temp >= current)
        {
            *h = NULL;
            break;
        }
    }

    return (count);
}
