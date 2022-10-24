#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * of a linked list.
 * @head: pointer to the first node.
 *
 * Return: sum of elements.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
