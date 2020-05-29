#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table.
* @ht: hash table you want to add or update the key/value to
* @key: non-empty string
* @value: value associated with the key, can be empty
*
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *aux = NULL;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[idx];

	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			if (aux->value != NULL)
			{
				free(aux->value);
				aux->value = strdup(value); /** free it before?*/
			}
		}
		aux = aux->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
