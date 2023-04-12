#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string par
 * Return: Null and cop
 */
char *_strdup(char *str)
{
	size_t len;
	char *cop;


	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	cop = malloc(len);

	if (cop == NULL)
	{
		return (NULL);
	}

	memcpy(cop, str, len);

	return (cop);
}

