#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
  * create_buffer - allocates 1024 bytes for a buffer.
  * @file: name of the buffer storing chars
  * Return: a pointer to the newly allocated buffer
  */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO,
			"Error: can't write to %s\n", file);
	exit(99);
	}
	return (buffer);
}
/**
  * close_file - closing file descriptors
  * @fd: the file descrptor to be closed
  */
void close_file(int fd)
{
	int g;

	g = close(fd);
	if (g == -1)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
	exit(100);
	}
}
/**
  * main - entry point
  * @argc: number of arguments passed
  * @argv: array of pointer to the arguments
  * Return: 0 if successful
  */
int main(int argc, char *argv[])
{
	int to, frm, wrt, rd;
	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
	exit(97);
	}
	buffer = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
	if (to == -1 || frm == -1)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}
	wrt = write(to, buffer, rd);
	if (wrt == -1 || to == -1)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[1]);
	free(buffer);
	exit(99);
	}
	rd = read(frm, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	close_file(frm);
	close_file(to);

	return (0);
}



