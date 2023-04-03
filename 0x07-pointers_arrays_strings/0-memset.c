#include "main.h"

/**
 * _memset -fills memory with constant byte
 *@s: address of the memory to be filled
 * @b:value to be used
 * @n: number of bytes
 * @i: integer parameter
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
