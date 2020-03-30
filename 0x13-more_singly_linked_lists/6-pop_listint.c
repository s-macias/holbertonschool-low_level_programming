#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the linked list
 *
 * Return: head nodes data (n) or 0 if list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *new_head = NULL;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	return (data);
}
