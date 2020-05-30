#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: hash table
*
* Return: None
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *aux;

	if (ht == NULL)
		return;
	printf("{");
	for (; idx < ht->size; idx++)
	{
		aux = ht->array[idx];
		while (aux != NULL)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			/*if (aux->next != NULL)*/
			printf(", ");
		}
	}
	printf("}\n");
}
