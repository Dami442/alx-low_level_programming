#include <stdio.h>
/**
 *main - prints out statements
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(char));
	printf("Size of a int: %lu.\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(long int));
	printf("Size of long long int:%lu.\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(float));
	return (0);
}	
