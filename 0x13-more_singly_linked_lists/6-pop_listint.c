#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked * list, and returns the head node’s data (n).
 * @head: pointer to pointer to the head of the listint_t list.
 *
 * Return: the head node's data (n).
 * if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int position;
	listint_t *current;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	current = *head;

	position = current->n;

	ptr = current->next;

	free(current);

	*head = ptr;

	return (position);
}
