#include "main.h"

/**
 * print_triangle - Prints triangle of set size
 * @size: Size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int j;
	int i;
	int k;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= (size - i))
			{
				_putchar(' ');
				j++;
			}
			k = 1;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}

	}
	else
		_putchar('\n');
}

