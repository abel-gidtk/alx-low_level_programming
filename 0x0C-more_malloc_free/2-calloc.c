#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements of array
 * @size: Bytes of each element
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(size * nmemb);
	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}

