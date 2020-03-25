#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int node_number;

	while (h)
	{
		node_number++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_number);
}
