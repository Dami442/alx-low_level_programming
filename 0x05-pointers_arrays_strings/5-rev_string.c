#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: parameter to be used
 * Return: 0
 */
void rev_string(char *s)
{
	int a = 0, b, c;
	char f;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		f = s[b];
		s[b] = s[c];
		s[c] = f;
	}
}

