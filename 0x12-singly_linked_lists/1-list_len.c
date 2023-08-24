#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @h: Pointer to a list
 *
 * Return: Number of elements of a linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp = NULL;

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
