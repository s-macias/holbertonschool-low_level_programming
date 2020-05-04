#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
