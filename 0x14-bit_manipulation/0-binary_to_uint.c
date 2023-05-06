#include "main.h"


/**
 * binary_to_uint - converts a binary no to an unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: converted no or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num = 0;
	int bit = 0, i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal_num += (1 << bit);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		bit++;
	}
	return (decimal_num);
}




