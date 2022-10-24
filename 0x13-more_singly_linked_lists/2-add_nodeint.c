#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a linked list.
 * @head: pointer to the list.
 * @n: number of nodes.
 *
 * Return: Address of new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
