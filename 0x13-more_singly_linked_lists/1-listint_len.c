#include "lists.h"

/**
 * listint_len - Returns number of elements in a list
 * @h: Pointer to list
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
