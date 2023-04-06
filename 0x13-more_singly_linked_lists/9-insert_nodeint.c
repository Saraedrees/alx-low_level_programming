#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer to pointer to head of the listint_t list.
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0.
 * @n: input value of the node.
 *
 * Return: the address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *ptr, *new_node;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));

	if (idx != 0)
	{
		for (; node < idx - 1 && ptr != NULL; node++)
		{
			ptr = ptr->next;
		}
	}

	if (ptr == NULL && idx != 0)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = ptr->next;
		ptr->next = new_node;
	}

	return (new_node);
}
