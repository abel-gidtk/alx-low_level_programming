#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: File
 * @text_content: Content to be appended
 *
 * Return: 1 for success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);

	if (a == -1 || w == -1)
		return (-1);

	close(a);
	return (1);
}
