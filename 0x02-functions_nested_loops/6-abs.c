#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: Integer to be computed
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
