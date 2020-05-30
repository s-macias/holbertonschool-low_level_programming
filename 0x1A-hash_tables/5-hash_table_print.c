#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @@ht: hash table
*
* Return: None
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (ht->array[idx] != NULL)
	{
		printf("'%s': '%s'", ht->array[idx]->key, ht->array[idx]->value);
		if (ht->array[idx]->next != NULL)*/
			printf(",");
		ht->array[idx] = ht->array[idx]->next;
	}
	printf("}\n");
}
