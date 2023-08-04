#include <stdio.h>

/**
 * main - Prints file name
 * @argc: Argument count
 * @argv: Argument list
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
