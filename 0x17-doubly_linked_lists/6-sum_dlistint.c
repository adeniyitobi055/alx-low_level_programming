#include "lists.h"

/**
 * sum_dlistint - Sum all elements in a list.
 * @head: Pointer to the list.
 *
 * Return: Sum of elements, if empty return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
