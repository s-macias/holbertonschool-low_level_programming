#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list to print
 *
 * Return: elements of the linked list

*/
size_t print_list(const list_t *h)
{
	int node_number = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_number++;
	}
	return (node_number);
}
