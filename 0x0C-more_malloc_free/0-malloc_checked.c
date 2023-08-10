#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocated = malloc(b);

	if (allocated == NULL)
		exit(98);
	return (allocated);
}
