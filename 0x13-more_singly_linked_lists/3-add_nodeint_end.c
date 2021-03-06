#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to linked list
 * @n: integer to be added to the list
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	temp = *head;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
