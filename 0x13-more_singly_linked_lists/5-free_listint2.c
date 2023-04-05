#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to pointer to head of the listint_t list.
 * The function sets the head to NULL.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}
