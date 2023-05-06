#include "main.h"

/**
 * get_bit - returns the vae of a bit at a given index
 * @n: number par
 * @index: index starting from 0 of the bit required
 *
 * Return: value ofbit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n & i) ? 1 : 0);
}
