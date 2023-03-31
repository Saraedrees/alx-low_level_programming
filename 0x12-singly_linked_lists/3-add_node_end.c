#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp1;
	size_t nchar;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = NULL;
	temp1 = *head;

	if (temp1 == NULL)
	{
		*head = temp;
	}
	else
	{
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = temp;
	}

	return (*head);
}
