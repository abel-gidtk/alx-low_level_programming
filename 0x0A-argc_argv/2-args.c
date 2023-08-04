#include <stdio.h>

/**
 * main - Prints all arguments it recieves
 * @argc: Argument count
 * @argv: Argument list
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
