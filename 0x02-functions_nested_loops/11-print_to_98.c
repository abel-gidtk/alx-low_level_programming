#include <stdio.h>
#include "main.h"

/**
 * space_and_comma - Prints a space and a comma
 *
 * Return: void
 */
void space_and_comma(void)
{
	_putchar(44);
	_putchar(32);
}
/**
 * convert_three_digit - Displays three digit numbers
 * @num: Number to be displayed
 *
 * Return: void
 */
void convert_three_digit(int num)
{
	int hundreds, tens, ones;

	hundreds = num / 100;
	tens = (num / 10) % 10;
	ones = num % 10;
	_putchar('0' + hundreds);
	_putchar('0' + tens);
	_putchar('0' + ones);
}
/**
 * convert_two_digit - Displays two digit numbers
 * @num: Number to be displayed
 *
 * Return: void
 */
void convert_two_digit(int num)
{
	int tens, ones;

	tens = num / 10;
	ones = num % 10;
	_putchar('0' + tens);
	_putchar('0' + ones);
}
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: Starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int posN;

	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				posN = -n;
				_putchar(45);
				if (posN > 9)
					convert_two_digit(posN);
				else
					_putchar('0' + posN);
			}
			else if (n > 9)
				convert_two_digit(n);
			else if (n >= 0 && n <= 9)
				_putchar('0' + n);
			if (n != 98)
				space_and_comma();
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n > 9 && n <= 99)
				convert_two_digit(n);
			else if (n > 99)
				convert_three_digit(n);
			if (n != 98)
				space_and_comma();
			n--;
		}
	}
	_putchar('\n');
}
