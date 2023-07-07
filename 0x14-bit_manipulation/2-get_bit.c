#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @index: index
 * @n: number whose bits are to be checked
 * Return: value of bit at index or
 * -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m =  1UL << index;

	if ((n & m) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
