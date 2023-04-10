#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input parameter
 * @needle: input par2
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *y = needle;


		while (*l == *y && *y != '\0')
		{
			l++;
			y++;
		}


		if (*y == '\0')
			return (haystack);
	}


	return (0);
}

