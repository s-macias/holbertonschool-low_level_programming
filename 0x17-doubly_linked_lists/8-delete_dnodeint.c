#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: pointer to head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp;

	temp = *head;
	if (*head == NULL)
		return (-1);
	else
	{
		temp = *head;
		while (counter < index && temp != NULL)
		{
			temp = temp->next;
			counter++;
		}
		if (counter == index && temp != NULL)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
		}
		else if (counter == index && temp->next == NULL)
			temp->prev->next = NULL;
		else if (counter != index && temp == NULL)
			return (-1);
	}
	return (1);
}
