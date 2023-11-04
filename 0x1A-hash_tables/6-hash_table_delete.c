#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: Hash table
 *
 * Return: Nothing
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		hash_node_t *entry = ht->array[i];

		while (entry != NULL)
		{
			hash_node_t *current = entry;

			entry = entry->next;

			free(current->key);
			free(current->value);
			free(current);
		}
	}

	free(ht->array);
	free(ht);
}
