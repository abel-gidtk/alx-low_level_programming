#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list
 * @h: Pointer to list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp = NULL;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			temp = temp->next;
			continue;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
