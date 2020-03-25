#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: linked list
 * Return: nomber of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int node_number = 0;

	while (h)
	{
		node_number++;
		h = h->next;
	}
	return (node_number);
}
