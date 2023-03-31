#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to head of the list.
 * @str: string needed to be duplicated
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t nchar;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	temp->len = nchar;
	temp->next = *head;
	*head = temp;

	return (*head);
}
