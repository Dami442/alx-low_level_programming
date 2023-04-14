#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string par
 * @s2: 2nd str par
 * @n: int par
 * Return: null and result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *result = NULL;

	/* handle case where s1 is NULL */
	if (s1 == NULL)
		s1 = "";

	/* handle case where s2 is NULL */
	if (s2 == NULL)
		s2 = "";

	/* determine the length of s1 and s2 */
	len1 = strlen(s1);
	len2 = strlen(s2);
	/* truncate s2 if n is less than its length */
	if (n < len2)
		len2 = n;
	/*allocate memory for the result string */
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);
	/*copy s1 to the result string */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	/* copy s2 to the result string */
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];
	/* null-terminate the result string */
	result[len1 + len2] = '\0';
		return (result);
}

