#include "lists.h"

/**
 * insert_dnodeint_at_index -inserts a new node at a given position.
 * @h: pointer to head of the list
 * @idx: position where node will be inserted
 * @n: integer that will be inserted at the node
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *new_node;
	unsigned int counter = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (*h);
	}
	else
	{
		temp = *h;
		while (counter < idx && temp)
		{
			temp = temp->next;
			counter++;
		}
		if (counter == idx && temp != NULL)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next->prev = new_node;
			temp->next = new_node;
		}
		else if (counter == idx && temp->next == NULL)
		{
			temp->next = new_node;
			new_node->prev = temp;
		}
	}
	return (new_node);
}
