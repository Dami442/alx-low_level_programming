#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
  * append_text_to_file - appends text at the end of a file.
  * @filename: name of the file to append to
  * @text_content: NULL terminated string to add at the end of the file.
  * Return: 1 on success and -1 on failure
  * -1 if filename is NULL
  * 1 if file exists and -1 if it doesn't or
  * if there are no required permissions to write the file
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int bytes_to_write;
	int write_bytes;


	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (-1);
	}
	close(file);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{	close(file);
		return (-1);
	}

	while (text_content[bytes_to_write] != '\0')
	{
		bytes_to_write++;
	}
	write_bytes = write(file, text_content, bytes_to_write);
	close(file);
	if (write_bytes == -1)
	{
		return (-1);
	}
	return (1);
}


