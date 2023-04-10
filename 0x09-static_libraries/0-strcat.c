#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string to be used
 * @src: string to be used
 * Return: 0 Always
 */
char *_strcat(char *dest, char *src)
{
	char *ptr1 = dest;

	while (*ptr1 != '\0')
	{
		ptr1++;	/* find the end of dest */
	}
	while (*src != '\0')
	{
		*ptr1++ = *src++;
	}				/* append src to dest */
	*ptr1 = '\0';	/* add null character to the end of concatenated string */


	return (dest);	/* return pointer to concatenated string */
}
