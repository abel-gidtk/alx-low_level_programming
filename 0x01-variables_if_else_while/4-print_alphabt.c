#include <stdio.h>

/**
 * main - Print the alphabet excluding q and e
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
