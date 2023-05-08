#include "main.h"

/**
  * create_file - Creates a file.
  * @filename: pointer to the name file to create.
  * @text_content: A pointer to a string to write to the file.
  *
  * Return: function fails - -1
  */
int create_file(const char *filename, char *text_content)
{
	int lp, j, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}
	lp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(lp, text_content, len);

	if (lp == -1 || j == -1)
	return (-1);
	close(lp);

	return (1);
}
