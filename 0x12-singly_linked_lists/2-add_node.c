#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Pointer to list
 * @str: String
 *
 * Return: Addresss of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cpy;
	int length;
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	cpy = strdup(str);
	length = strlen(cpy);

	if (new == NULL)
		return (NULL);
	new->str = cpy;
	new->len = length;

	new->next = *head;
	*head = new;

	return (new);
}
