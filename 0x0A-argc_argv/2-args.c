#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
