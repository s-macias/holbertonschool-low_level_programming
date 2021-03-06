#include "lists.h"

/**
 * free_listint -   frees a listint_t list.
 * @head: head of the linked list to free
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
