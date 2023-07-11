#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to file to read from
 * @letters: no of letters to be read and printed
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	int c;
	size_t num = 0;
	size_t total_no_written = 0;

	if (filename == NULL)
	{
		return (0);
	}

	while ((c = fgetc(file)) != EOF && num < letters)
	{
		if (_putchar(c) == EOF)
		{
			fclose(file);
			return (0);
		}
		num++;
		total_no_written++;
	}
	fclose(file);
	if (total_no_written != num)
	{
		return (0);
	}
	return (num);
}
