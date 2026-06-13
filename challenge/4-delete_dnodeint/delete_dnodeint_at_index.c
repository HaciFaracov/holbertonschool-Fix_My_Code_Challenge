#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i = 0;

    if (!head || !*head)
        return (-1);

    /* Navigate to the node */
    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
        return (-1);

    /* Update links */
    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        *head = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
