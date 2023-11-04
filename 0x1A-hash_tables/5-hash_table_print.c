#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: Hash table
 *
 * Returns: Nothing
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first;

	if (ht == NULL)
		return;

	first = 1;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		hash_node_t *entry = ht->array[i];

		while (entry != NULL)
		{
			if (!first)
				printf(", ");

			printf("'%s': '%s'", entry->key, entry->value);
			first = 0;

			entry = entry->next;
		}
	}
	printf("}\n");
}
