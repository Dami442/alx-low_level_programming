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

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
}
