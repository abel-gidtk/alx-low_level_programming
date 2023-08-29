#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list
 * @head: Pointer to a list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
