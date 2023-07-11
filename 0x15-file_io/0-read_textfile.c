#include "main.h"
#include <stdlib.h>
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
	char *buffer = (char *)malloc((letters + 1) * sizeof(char));
	/* Add space for null char */
	ssize_t Readbytes = fread(buffer, sizeof(char), letters, file);
	ssize_t Writebytes;

	if (filename == NULL)
	{
		return (0);
	}
	if (Readbytes == 0)
	{
		fclose(file);
		return (0);
	}

	buffer[Readbytes] = '\0'; /* Add null terminator */

	Writebytes = fwrite(buffer, sizeof(char), Readbytes, stdout);
	fclose(file);

	if (Writebytes != Readbytes)
	{
		return (0);
	}

	return (Writebytes);
}
