#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string to be used
 * @src: string to be used
 * Return: 0 Always
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (0);
}
