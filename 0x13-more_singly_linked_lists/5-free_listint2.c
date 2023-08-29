#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list
 * @head: Pointer to a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
