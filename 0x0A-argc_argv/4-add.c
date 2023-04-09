#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int var representing number of arguments
 * @argv: int array holding the arguments
 * Return: 0 on success and
 * 1 if there are errors
 */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && *argv[i] != '0')
		{
			printf("Error: Invalid input.\n");
			return (1);
		}
		else if (num < 0)
		{
			printf("Error: %d not a valid positive integer\n", num);
			return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

