#include "main.h"
#include <stdlib.h>

/**
  * read_textfile- Read text file print to STDOUT.
  * @filename: text file being read
  * @letters: number of letters to be read
  * Return: w- actual number of bytes read and printed
  *        0 when function fails or filename is NULL.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ly;
	ssize_t c;
	ssize_t j;

	ly = open(filename, O_RDONLY);
	if (ly == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(ly, buf, letters);
	c = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(ly);
	return (c);
}
