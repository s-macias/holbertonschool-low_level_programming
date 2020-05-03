#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in the list.
 * @h: pointer to head of the list
 *
 * Return: number ot nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int node_number = 0;

	while (h)
	{
		node_number++;
		h = h->next;
	}
	return (node_number);
}
