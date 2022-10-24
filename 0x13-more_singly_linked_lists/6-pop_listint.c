#include "lists.h"

/**
 * pop_listint - Deletes the head node of
 * a linked list.
 * @head: pointer to the first node.
 *
 * Return: Head nodes data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *ap;
	int headnode;

	if (*head == NULL)
		return (0);

	temp = *head;
	headnode = temp->n;
	ap = temp->next;
	free(temp);

	*head = ap;

	return (headnode);
}
