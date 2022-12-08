#include "lists.h"

/**
 * free_dlistint - frees the memory allocated to a list.
 * @head: Pointer to the list.
 *
 * Return: Always EXIT_SUCCESS
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
