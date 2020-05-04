#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of the list
 * @head: head of the list to add
 *
 * Return: sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
