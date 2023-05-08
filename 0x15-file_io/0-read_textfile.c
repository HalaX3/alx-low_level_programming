#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file
 * @filename: text fileto be read
 * @letters: number of letters
 *
 * Return: w- number of byte ,0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	t = read(f, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	close(f);
	free(buffer);

	return (w);
}
