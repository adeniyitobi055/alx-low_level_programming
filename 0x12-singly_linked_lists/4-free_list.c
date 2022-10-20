#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees memory allocated to list.
 * @head: Address of the first node of a list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
