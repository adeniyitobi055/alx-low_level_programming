#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position in a linked list.
 * @head: pointer to the first node.
 * @idx: index of the list.
 * @n: integer element.
 *
 * Return: address of new node, or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp;
	unsigned int i;

	temp = *head;

	if (idx != 0)
	{
		while (i < idx && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
