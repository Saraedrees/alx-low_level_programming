#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of
 * a listint_t list.
 * @head: pointer to a pointer to the head of the listint_t list.
 * @n: input values of the nodes.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
