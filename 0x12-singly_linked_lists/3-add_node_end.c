#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a linked list_t list.
 * @head: head of the linked list to print
 * @str: node to be added to the list
 * Return: address of the new element m or NUll if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int string_length = 0;
	list_t *new_node;
	list_t *temp;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	while (str[string_length])
	{
		string_length++;
	}
	new_node->len = string_length;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = NULL;
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
