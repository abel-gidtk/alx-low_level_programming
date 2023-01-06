#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints product of two numbers
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
