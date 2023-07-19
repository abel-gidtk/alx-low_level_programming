#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	if (a == b && b == c)
		largest = a;
	else if (a == b)
	{
		if (a < c)
			largest = c;
		else
			largest = a;
	}
	else if (a == c)
	{
		if (a < b)
			largest = b;
		else
			largest = a;
	}
	else if (b == c)
	{
		if (b < a)
			largest = a;
		else
			largest = b;
	}

	return (largest);
}
