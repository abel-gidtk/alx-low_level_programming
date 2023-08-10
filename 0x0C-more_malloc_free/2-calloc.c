#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmeb: Number of elements
 * @size: Size
 *
 * Return: Pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *allocated;
	char *init;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocated = malloc(nmemb * size);
	if (allocated == NULL)
		return (NULL);

	init = allocated;

	for (i = 0; i < nmemb * size; i++)
		init[i] = 0;

	return (init);
}
