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
	size_t len = strlen(str) + 1;
	char *cop = malloc(len);


	if (str == NULL)
	{
		return (NULL);
	}

	if (cop == NULL)
	{
		return (NULL);
	}

	memcpy(cop, str, len);

	return (cop);
}

