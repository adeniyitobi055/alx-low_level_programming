#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to the list
 *
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
