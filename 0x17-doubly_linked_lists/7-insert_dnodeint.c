#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index.
 * @h: pointer to the list.
 * @idx: index to insert node.
 * @n: Data to insert into the node.
 *
 * Return: Address of new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *newnode;
	unsigned int i = 0;

	temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode || !h)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;

		if (temp->next == NULL)
			return (add_dnodeint_end(h, n));

		newnode->prev = temp;
		newnode->next = temp->next;
		temp->next = newnode;
		newnode->next->prev = newnode;
		return (newnode);
	}

	return (NULL);
}
