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

	if (head->next == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		temp = head->next;

		while (temp != NULL)
		{
			free(head);
			head = temp;
			temp = temp->next;
		}
		free(head);
		head = NULL;
	}
}
