#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: parameter for string
 * @c: character parameter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')  /* For characters excluding the last one */
	{
		if (*s == c) /* Checks if the current character */
			       /*in the string is equal to c */
		{
			return (s);
		}
		s++;
	}

	if  (*s == c) /* to check if the last character is = c*/
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
