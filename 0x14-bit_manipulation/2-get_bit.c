#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Returns value of bit at a given index
 * @n: Number
 * @index: Index
 *
 * Return: Value at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	mask = 1UL << index;
	return (n & mask) ? 1 : 0;	
}
