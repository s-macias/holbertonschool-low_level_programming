#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list.
 * @head: head of the linked list
 *
 * Return: the sum or 0 if the list is empty
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
