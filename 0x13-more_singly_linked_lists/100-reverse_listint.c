#include "lists.h"

/**
 * reverse_listint - Print a linked list in reverse
 * @head: Pointer to the first node
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode;
	listint_t *nextnode;

	prevnode = NULL;

	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
