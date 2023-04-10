#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: destination string parameter
 * @src: source string parameter
 * @n: number of bytes to be copied
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (ptr);
}
