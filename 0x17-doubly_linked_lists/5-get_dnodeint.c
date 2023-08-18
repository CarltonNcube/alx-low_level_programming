#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a given
 *			index from a doubly linked list.
 *
 * @head: A pointer to the head node of the doubly linked list.
 * @index: The index of the node to retrieve (0-based).
 *
 * Return: If the index is valid, returns a pointer to the requested node.
 *         Otherwise, returns NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
