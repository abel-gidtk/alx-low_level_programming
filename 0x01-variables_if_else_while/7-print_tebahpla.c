#include <stdio.h>

/**
 * main - Prints the alphabet in reverse
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
