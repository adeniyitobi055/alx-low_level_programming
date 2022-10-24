#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 * of a linked list.
 * @head: pointer to the first node.
 * @n: number of nodes.
 *
 * Return: Address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	(void)temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (*head);
}
