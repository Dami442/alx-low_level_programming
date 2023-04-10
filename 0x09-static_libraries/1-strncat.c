#include "main.h"

/**
 * *_strncat - appends src to dest using at most, n bytes from src
 * @dest: destination string parameter
 * @src: source string parameter
 * @n: number of bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (src[i] != '\0' && i < n)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (ptr);
}
