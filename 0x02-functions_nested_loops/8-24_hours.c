#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0;
	int j, tens, ones, minTens, minOnes;

	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			if (i >= 0 && i <= 9)
			{
				_putchar(48);
				_putchar('0' + i);
			}
			else
			{
				tens = i / 10;
				ones = i % 10;
				_putchar('0' + tens);
				_putchar('0' + ones);
			}
			_putchar(58);
			if (j >= 0 && j <= 9)
			{
				_putchar(48);
				_putchar('0' + j);
			}
			else
			{
				minTens = j / 10;
				minOnes = j % 10;
				_putchar('0' + minTens);
				_putchar('0' + minOnes);
			}
			_putchar('\n');
			j++;
		}
		i++;
	}
}
