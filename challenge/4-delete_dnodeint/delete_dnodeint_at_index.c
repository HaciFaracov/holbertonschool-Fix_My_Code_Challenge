#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i = 0;

    if (!head || !*head)
        return (-1);

    /* Traverse to the node, but keep 'current' as a temporary pointer */
    while (current && i < index)
    {
        current = current->next;
        i++;
    }

    if (!current)
        return (-1);

    /* Re-link pointers: skip the current node */
    if (current->prev)
        current->prev->next = current->next;
    else
        *head = current->next; /* If deleting the head */

    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
