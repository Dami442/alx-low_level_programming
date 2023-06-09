#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of chars 0 and 1
 * Return: converted number or 0 if there is 1 or more chars
 * in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			n = n * 2;
		}
		else if (b[i] == '1')
		{
			n = n * 2 + 1;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
