#include "lists.h"

/**
 * free_listint2 -   frees a listint_t list.
 * @head: head of the linked list to free
 *
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
