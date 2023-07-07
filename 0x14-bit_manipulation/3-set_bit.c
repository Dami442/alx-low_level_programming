#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: index
 * @n: number whose bits are to be checked
 * Return: 1 if it worked, and
 * -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | m;
	return (1);
}

