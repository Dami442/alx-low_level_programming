#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index starting from 0 of the bit that is to be set
 * @n: int par
 * Return: 1 on success, -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= i;
	return (1);
}
