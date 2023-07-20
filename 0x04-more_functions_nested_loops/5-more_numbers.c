#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, tens, ones;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tens = j / 10;
			ones = j % 10;
			if (j > 9)
				_putchar('0' + tens);
			_putchar('0' + ones);
		}
		_putchar('\n');
	}
}
