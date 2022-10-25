#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 * of a linked list.
 * @head: pointer to the first node.
 * @index: index of the list.
 *
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode;
	listint_t *temp;

	temp = *head;

	if (index != 0)
	{
		unsigned int i = 0;

		while (i < index - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}

	nextnode = temp->next;

	if (index != 0)
	{
		temp->next = nextnode->next;
		free(nextnode);
	}
	else
	{
		free(temp);
		*head = nextnode;
	}
	return (1);
}
