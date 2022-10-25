#include "lists.h"

/**
 * reverse_listint - Print a linked list in reverse
 * @head: Pointer to the first node
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentnode;
	listint_t *prevnode;
	listint_t *nextnode;

	prevnode = NULL;
	currentnode = nextnode = *head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	*head = prevnode;
	return (*head);
}
