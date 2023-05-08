#include "main.h"

/**
 * append_text_to_file - Appends text
 * @filename: A pointer to file name
 * @text_content: The string to be added
 *
 * Return: If fun fails or filename is NULL - -1.
 *         If file does not exist - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int y, x, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	y = open(filename, O_WRONLY | O_APPEND);
	x = write(y, text_content, length);

	if (y == -1 || x == -1)
		return (-1);

	close(y);

	return (1);
}
