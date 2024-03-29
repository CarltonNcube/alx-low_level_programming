#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	/* Check for collisions and update if the key already exists */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{

		/* Update the value (duplicated) */
		free(current->value);
		current->value = strdup(value);
		if (current->value == NULL)
			return (0);
		return (1);
		}
	current = current->next;
	}

	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Add the new node at the beginning of the list (collision resolution) */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
