#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 0x12345678;
	unsigned char *p = (unsigned char *)&i;

	return ((*p == 0x78) ? 1 : 0);
}
