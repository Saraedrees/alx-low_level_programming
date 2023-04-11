#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to the filename file.
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and
 * -1 (on failure, or if filename is NULL, or
 * -1 (if the file does not exist,
 * or if you do not have the required permissions to write the file)
 * 1 (if the file exists)
 * If text_content is NULL, do not add anything to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int nletters;
	int wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		wr = write(op, text_content, nletters);

		if (wr == -1)
			return (-1);
	}

	close(op);

	return (1);
}
