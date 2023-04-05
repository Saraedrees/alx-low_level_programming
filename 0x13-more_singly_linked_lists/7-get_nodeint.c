#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer to head of the listint_t list.
 * @index: is the index of the node, starting at 0.
 *
 * Return:the nth node of a listint_t linked list,
 * or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (node < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;

		node++;
	}
	return (head);
}
