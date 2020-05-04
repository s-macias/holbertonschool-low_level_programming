#include "lists.h"

/**
 * add_dnodeint_end - adds  a new node at the end of a dlistint_t list.
 * @head: pointer to the beginning of the list
 * @n: integer to be added to the end of the list
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t temp = *head;
	dlistint_t new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->previou = NULL;
	}
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
