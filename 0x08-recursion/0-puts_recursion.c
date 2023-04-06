#include "main.h"
/**
 *_puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	if (*(s + 1) == '\0')
	/* to ensure new line is printed only after string */
	{
		_putchar ('\n');
	}
}
