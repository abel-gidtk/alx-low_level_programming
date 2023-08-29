#include "lists.h"

/**
 * get_nodeint_at_index - Gets node at nth index
 * @head: Pointer to list
 * @index: Index
 *
 * Return: Node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i, count = 0;
	listint_t *temp2 = head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (index >= count)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp2 = temp2->next;
	}

	return (temp2);
}
