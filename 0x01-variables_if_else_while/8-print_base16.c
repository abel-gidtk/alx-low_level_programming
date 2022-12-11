#include <stdio.h>

/**
 * main - Prints hexadecimals
 *
 * Return: 0
*/
int main(void)
{
	int n = 48;
	int j = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
