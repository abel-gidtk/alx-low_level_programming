#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j, ones, tens, product;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;
			if (product > 9)
			{
				tens = product / 10;
				ones = product % 10;
				_putchar('0' + tens);
				_putchar('0' + ones);
			}
			else
			{
				if (j != 0)
				{
					_putchar(32);
				}
				_putchar('0' + product);
			}
			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
