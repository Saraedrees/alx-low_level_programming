#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a listint_t list.
 * @head: pointer to pointer to head of the listint_t list.
 * @n: input value of the nodes.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (ptr == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (*head);
}
