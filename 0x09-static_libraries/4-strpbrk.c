#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for a set of any bytes
 * @s: pinter to the string to be searched for
 * @accept: string with specified characters to be searched for
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *y = accept;

	for (; *s !=  '\0'; s++)
	{
		for (y = accept; *y != '\0'; y++)
		{
			if (*s == *y)
			{
				return (s);
			}
		}
	}
	return (NULL);

}
