#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change
 * for an amount of money
 * @argc: int vr for number of command line args
 * @argv: array of strings containing the args
 * Return: 0 on success and
 * 1 if there exists errors
 */
int main(int argc, char *argv[])
{
	int cents, i;
	int coins[5] = {25, 10, 5, 2, 1};
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}


