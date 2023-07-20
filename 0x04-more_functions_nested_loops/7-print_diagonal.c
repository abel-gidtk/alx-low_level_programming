#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Length of diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				{
					_putchar(92);
					continue;
				}
				_putchar(32);
			}
			_putchar('\n');
		}
	}
}
