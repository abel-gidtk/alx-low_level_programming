#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints min number of coins to make change
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0 success 1 fail
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	return (0);
}
