#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: parameter for string
 * @c: character parameter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

	}
	return (0);
}
