#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a node at the end of a list
 * @head: Pointer to a list
 * @str: String
 *
 * Return: Pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length = strlen(str);
	list_t *temp = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}
