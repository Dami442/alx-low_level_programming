#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *@s: parameter to be used
 *
 *Return: 0
 */
int _strlen(char *s)
{
	int p = 0; /* variable for counter starting from 0 */

	for (; *s++;)
		p++;
	return (p);
}
