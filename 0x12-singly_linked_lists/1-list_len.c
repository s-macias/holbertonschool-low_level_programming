#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of the linked list to print
 *
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	int node_number = 0;

	while (h != NULL)
	{
		h = h->next;
		node_number++;
	}
	return (node_number);
}
