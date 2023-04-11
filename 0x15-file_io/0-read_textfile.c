#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: pointer to filename file.
 * @letters: is the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 * or 0 if (the file can not be opened or read, or
 * if filename is NULL, or
 * if write fails or does not write the expected amount of bytes)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t rd, wr;
	char *buff;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	rd = read(fp, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(fp);

	free(buff);

	return (wr);
}
