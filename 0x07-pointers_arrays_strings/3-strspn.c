#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to a '\0' terminated string
 * specified with the set of characters to be searched for
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	char *a = s;
	char *c = accept;

	for (; *a != '\0'; a++)
	/* iterates over each character of the string */
	{
		for (c = accept; *c != '\0'; c++)
	/* iterates over characters in the character set */
		{
			if (*a == *c)
			{
				l++;
				break;
			}
		}
		if (*c == '\0')
		{
			break;
		}
	}
	return (l);
}

