#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a linked list_t list.
 * @head: head of the linked list to print
 * @str: node to be added to the list
 * Return: address of the new element m or NUll if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int node_number = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[node_number])
	{
		node_number++;
	}
	new_node->len = node_number;
	new_node->str = strdup(str);
	new_node->next = NULL;
	*head = new_node;
	return (new_node);
}
