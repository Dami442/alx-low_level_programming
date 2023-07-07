#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number which is to be converted
 *
 * Return: 0 on success
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (m > 0)
	{
		if (n & m)
		{
			leading_zero = 0;
			_putchar('1');
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
		m = m >> 1;
	}
}
