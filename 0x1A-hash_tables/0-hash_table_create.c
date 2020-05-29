#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of the array
*
* Return: pointer to the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = calloc(sizeof(hash_table_t), 1);
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(sizeof(hash_node_t *), size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
