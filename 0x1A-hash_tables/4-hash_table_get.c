#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: The hash table to look into
 * @key: Key to use to retrieve value
 *
 * Return: Value associated with element, or NULL if key
 * could not be found.
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *entry;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
			return (entry->value);

		entry = entry->next;
	}

	return (NULL);
}
