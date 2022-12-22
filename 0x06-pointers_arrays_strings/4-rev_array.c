#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array to be reversed
 * @n: Size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}
