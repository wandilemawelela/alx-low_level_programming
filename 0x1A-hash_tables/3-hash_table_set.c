#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Hash table to update key/value to
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 if success, 0 otherwise
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (0);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0); /* Failed to duplicate key or value */
	}

	/* Add the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
