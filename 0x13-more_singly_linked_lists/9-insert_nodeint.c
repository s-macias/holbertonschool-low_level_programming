#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the linked list
 * @idx: position where the node will be inserted
 * @n: value to be assigned to the new node
 *
 * Return: address of new node, NULL if failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *temp = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (; i < idx; i++)
	{
		temp = temp->next;
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
