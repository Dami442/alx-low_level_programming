#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
  * create_file - creates a file
  * @filename: the name of file to create
  * @text_content: null terminated string to write to the file
  * Return: 1 on success
  * -1 on failure
  * if filename is NULL, return -1
  */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t length = 0;
	char *ptr = text_content;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (*ptr != '\0')
		{
			length++;
			ptr++;

		}
	}
	bytes_written = write(file, text_content, length);

	if (bytes_written == -1)
	{
		close(file);
		return (-1);
	}
	return (1);
}
