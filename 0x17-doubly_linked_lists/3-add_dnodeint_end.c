#include "lists.h"

/**
 * add_dnodeint_end - Add node at the end of a list.
 * @head: Double pointer to the list.
 * @n: Data to insert into the node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	newnode->prev = temp;
	temp->next = newnode;
	temp = newnode;

	return (newnode);
}
