#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node
 * @head: Pointer to list
 *
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = NULL;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	i = temp->n;
	free(temp);
	temp = NULL;
	return (i);
}
