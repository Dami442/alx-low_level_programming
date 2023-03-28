#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: string to be reversed
 *Return: 0
 */
void print_rev(char *s)
{
	int a, c;

	c = 0;

	while (s[c] != '\0')
		c++;
	for (a = c - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
