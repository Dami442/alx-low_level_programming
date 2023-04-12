#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates strings
 * @s1: dest string
 * @s2: src string
 * Return: null and result
 */

char *str_concat(char *s1, char *s2)
{
	size_t s1_len;
	size_t s2_len;
	size_t result_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	result_len = s1_len + s2_len + 1;
	result = malloc(result_len * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strncpy(result, s1, s1_len);
	strncpy(result + s1_len, s2, s2_len + 1);

	return (result);
}

