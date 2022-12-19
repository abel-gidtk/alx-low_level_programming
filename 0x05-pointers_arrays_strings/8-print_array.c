#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array to be used
 * @n: Number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
