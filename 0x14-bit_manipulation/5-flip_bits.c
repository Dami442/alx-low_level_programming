#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: int par
 * @m: int par
 * Return: 0 on success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	unsigned int y = 0;

	while (j > 0)
	{
		if (j & 1UL)
		{
			y++;
		}
		j >>= 1;
	}
	return (y);
}
