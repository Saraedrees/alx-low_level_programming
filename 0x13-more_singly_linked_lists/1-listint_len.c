#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 * a linked listint_t list.
 * @h: a pointer to the linked list "listint_t".
 *
 * Return: the number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
