#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (list == NULL)
		return NULL;

	skiplist_t *express = list;
	skiplist_t *prev;

	while (express->express != NULL && express->express->n < value)
	{
		prev = express;
		express = express->express;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, express->index);

	skiplist_t *current = prev;
	while (current->next != NULL && current->next->n < value)
	{
		current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

	if (current->next != NULL && current->next->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->next->index, current->next->n);
		return current->next;
	}

	return NULL;
}
