#include "main.h"

/**
  * append_text_to_file - Appends text at the end of a file.
  * @filename: A pointer to the name of the file.
  * @text_content: The string to add to the end of the file.
  * Return: If the function fails or filename is NULL - 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, b, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	b = write(m, text_content, len);

	if (m == -1 || b == -1)
	return (-1);

	close(m);

	return (1);
}
