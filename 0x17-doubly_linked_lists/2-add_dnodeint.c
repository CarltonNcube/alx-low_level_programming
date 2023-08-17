#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list.
 * @head: Pointer to the pointer of the head node.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL)
        (*head)->prev = new_node;

    *head = new_node; // Update the head pointer

    return (new_node);
}

int main(void)
{
    // Test your function here if needed
    return (EXIT_SUCCESS);
}

