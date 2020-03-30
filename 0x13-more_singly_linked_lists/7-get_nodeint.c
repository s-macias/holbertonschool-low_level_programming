#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the linked list
 * @index: position of node to be returned
 *
 * Return: value at nth position or NULL if node does not exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (; i < index && index != '\0'; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
