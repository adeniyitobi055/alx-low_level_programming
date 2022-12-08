#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index position.
 * @head: Double pointer to the list.
 * @index: Index position.
 *
 * Return: 1 if successful, -1, if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
