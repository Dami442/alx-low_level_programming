#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
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
	int file;
	int writtenbytes;
	ssize_t num;
	char *buffer;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	num = read(file, buffer, letters);
	if (num == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	writtenbytes = write(STDOUT_FILENO, buffer, num);

	free(buffer);
	close(file);

	if (writtenbytes != num)
	{
		return (0);
	}
	return (num);
}
