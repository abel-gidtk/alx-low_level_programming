#include "main.h"

/**
 * clear_bit - Clears bit at given index
 * @n: Pointer to int
 * @index: Index
 *
 * Return: 1 if it worked -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n) & ~(1 << index);
	return (1);
}