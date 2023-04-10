#include <unistd.h>

/**
 * _putchar - prints out characters
 * @c: char parameter
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
