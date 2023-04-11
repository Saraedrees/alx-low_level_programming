#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: a pointer to the file created.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, or
 * -1 on failure (file can not be created, file can not be written,
 *  write “fails”, etc…)
 *  -1 if filename is NULL.
 *
 *  if text_content is NULL create an empty file.
 *  if the file already exists, truncate it.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(o, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
