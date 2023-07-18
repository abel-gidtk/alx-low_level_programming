#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Integer to be computed
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	int last = n % 10;

	_putchar('0' + last);
	return (last);
}
