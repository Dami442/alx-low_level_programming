#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *@s: parameter to be used
 *
 *Return: 0
 */
int _strlen(char *s)
{
	int lng;

	while (*s != '\0')
	{
		lng++;
		s++;
	}
	return (0);
}
