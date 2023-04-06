#include "main.h"
/**
 *_strlen_recursion - retrns the length of a string
 * @s: string to be used
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
