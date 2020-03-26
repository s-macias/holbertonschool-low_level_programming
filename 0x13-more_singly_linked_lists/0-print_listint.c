#include "lists.h"
#include <stddef.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node_number = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_number++;
	}
	return (node_number);
}
