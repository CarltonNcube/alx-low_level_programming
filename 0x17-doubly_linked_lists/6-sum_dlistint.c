#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all elements in a doubly linked list.
 * @head: A pointer to the head node of the doubly linked list.
 *
 * Return: The sum of all elements in the list. If the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	register int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
