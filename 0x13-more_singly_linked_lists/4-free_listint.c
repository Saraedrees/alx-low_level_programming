#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
