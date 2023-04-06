#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to pointer to the head of the listint_t list.
 * @index: is the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *ptr, *ptr2;

	ptr = *head;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (node < index - 1)
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
		node++;
	}

	ptr2 = ptr->next;
	ptr->next = ptr2->next;
	free(ptr2);
	return (1);
}
