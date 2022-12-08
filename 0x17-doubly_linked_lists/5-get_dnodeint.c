#include "lists.h"

/**
 * get_dnodeint_at_index - Returns node at index.
 * @head: Double pointer to the list.
 * @index: Index.
 *
 * Return: Address of the node, if node doesn't exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
