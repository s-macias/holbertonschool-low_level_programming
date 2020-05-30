#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *aux1;
	hash_node_t *aux2;

	if (ht == NULL)
		return;
	for (; idx < ht->size; idx++)
	{
		aux1 = ht->array[idx];
		while (aux1 != NULL)
		{
			free(aux1->key);
			free(aux1->value);
			aux2 = aux1;
			free(aux1);
			aux1 = aux2;
			aux1 = aux1->next;
		}
	}
}
