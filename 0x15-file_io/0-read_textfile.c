#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads text from a file
 * @filename: File
 * @letters: Bytes to be read
 *
 * Return: Bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	char *buffer;
	ssize_t r;
	ssize_t w;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	r = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(f);
	return (w);
}
