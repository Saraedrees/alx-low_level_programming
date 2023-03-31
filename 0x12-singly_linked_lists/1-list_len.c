#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list.
 * @h: pointer to the the list_t list to print.
 *
 * Return: the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
