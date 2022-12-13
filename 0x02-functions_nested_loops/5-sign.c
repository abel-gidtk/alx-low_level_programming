#include "main.h"

/**
 * print_sign - Prints the sign of the input
 * @n: Integer to be checked
 *
 * Return: 1 if positive 0 if 0 -1 if negative
*/
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (1);
	else
		return (0);
}
