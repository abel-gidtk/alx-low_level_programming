#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: 0
*/
int main(void)
{
	int n = 97;
	int j = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
