#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 *
 * Return: Pointer to the newly created hash table
 *
 */

hash_table_t *hash_table_create()
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	return (table);
}
