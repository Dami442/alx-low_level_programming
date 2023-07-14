#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
  * main - copies the content of a file to another file
  * @argc: arg count
  * @argv: argument variables
  * Return: 1 on success
  */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	char buffer[BUFFER_SIZE]; 
	ssize_t bytes_read, bytes_written;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}	
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		return (98);
	}	
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Can't write to %s\n", file_to);
		close(fd_from);
		return (99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (98);
		}
	}
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", file_from);
		return (100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", file_to);
		return (100);
	}
	return (0);
}
	
