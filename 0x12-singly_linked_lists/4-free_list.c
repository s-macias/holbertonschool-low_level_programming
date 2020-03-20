#include "lists.h"

/**
 * free_list -   frees a list_t list.
 * @head: head of the linked list to print
 *
 * Return: nothing
*/

void free_list(list_t *head)
{
	while (head)
	{
		free(head->next);
		free(head->len);
		free(head);
	}
}
