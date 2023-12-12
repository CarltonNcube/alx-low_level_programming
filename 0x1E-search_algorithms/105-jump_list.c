#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using
 *              the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev;

	if (!list || size == 0)
		return NULL;

	jump = sqrt(size);
	prev = 0;

	printf("Value checked at index [%lu] = [%d]\n", prev, list->n);
	while (list->index < size - 1 && list->n < value)
	{
		prev = list->index;
		for (size_t i = 0; i < jump && list->next; i++)
			list = list->next;

		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, list->index);
	for (; prev < list->index && list->n < value; prev++)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev, list->n);
		list = list->next;
	}

	return (list && list->n == value) ? list : NULL;
}
