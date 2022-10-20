#include "lists.h"
#include <stdio.h>

/**
 * print_list - print a linked list.
 * @h: pointer to the next node on the list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
