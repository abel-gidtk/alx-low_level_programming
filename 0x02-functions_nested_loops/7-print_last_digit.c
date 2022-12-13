#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: Integer to be checked
 *
 * Return: Last digit of input
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;
	_putchar('0' + last);
	return (last);
}
