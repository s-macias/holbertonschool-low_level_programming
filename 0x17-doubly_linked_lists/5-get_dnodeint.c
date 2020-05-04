#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: position of the node whose data we want to return
 *
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (counter != index)
	{
		temp = temp->next;
		counter++;
	}
	if (index == counter)
		return (temp);
	else
		return (NULL);
}
