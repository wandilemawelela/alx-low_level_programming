#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 *
 * Return: Pointer to the newly created hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t*));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
