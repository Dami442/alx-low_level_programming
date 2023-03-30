#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string to be used
 * @src: string to be used
 * Return: 0 Always
 */
char *_strcat(char *dest, char *src)
{
	int i =0;
	int j = 0;

	char *str1;
	char *str2;

	str1 = dest;
	str2 = src;

	while (dest[i] != '\0')
	{
		++str1;
		i++;
	}
	while (src[j] != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
		j++;
	}
	return (0);
}
