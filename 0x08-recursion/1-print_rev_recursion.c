#include "main.h"

/**
 *_print_rev_recursion - prints a string followed by a new line
 *@s: string pointer
 *Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar (*s);
}
