#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that multiplies two numbers
 *@argc: int var representing no of args
 *@argv: array containing values of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;
	int valid;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		valid = atoi(argv[i]);

		if (valid == 0 && *argv[i] != '0')
		{
			printf("Error: %s is not a number\n", argv[i]);
			return (1);
		}

		mul *= valid;
	}
	printf("%d\n", mul);
	return (0);
}

