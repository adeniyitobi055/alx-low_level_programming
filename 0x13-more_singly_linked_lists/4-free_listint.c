#include "lists.h"

/**
 * free_listint - Frees allocated memory to
 * a linked list.
 * @head: pointer to the first element.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
