#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Length of list
 * @p: Pointer to list
 *
 * Return: Length
 */
unsigned int list_len(listint_t *p)
{
	unsigned int count = 0;

	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
/**
 * create_node - Creates a node
 * @n: Integer value of node
 *
 * Return: New node
 */
listint_t *create_node(int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
/**
 * add_first - Adds node to first
 * @h: Head
 * @n: New
 *
 * Return: void
 */
void add_first(listint_t **h, listint_t *n)
{
	n->next = *h;
	*h = n;
}
/**
 * add_last - Adds node to end
 * @h: Head
 * @n: New
 *
 * Return: void
 */
void add_last(listint_t **h, listint_t *n)
{
	listint_t *temp = *h;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}
/**
 * insert_nodeint_at_index - Inserts node at index.
 * @head: Pointer to head
 * @idx: Index
 * @n: Integer value of node
 *
 * Return: New node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *temp2 = *head;
	listint_t *new = NULL;
	unsigned int i, length = list_len(temp);

	if (idx >= length)
		return (NULL);
	new = create_node(n);
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		add_first(head, new);
		return (new);
	}
	if (idx == length - 1)
	{
		add_last(head, new);
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp2 = temp2->next;
	}
	new->next = temp2->next;
	temp2->next = new;

	return (new);
}
