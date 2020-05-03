#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of list
 *
 * Return: number of nodes of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_number = 0;

	if (h == NULL)
		return (0);
	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_number++;
	}
	return(node_number);
}
