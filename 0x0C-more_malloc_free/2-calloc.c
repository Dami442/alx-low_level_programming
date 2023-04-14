#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function to allocates memory
 * @nmemb:int par 1
 * @size: int type par 2
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		p[count] = 0;
		count++;
	}
	return (p);
}
