#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees the memory of a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * This function iterates through the given doubly linked list and frees
 * the memory allocated for each node, ensuring there are no memory leaks.
 *
 * Return: None.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
