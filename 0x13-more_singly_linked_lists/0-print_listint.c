#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (count);
}
