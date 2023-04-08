#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of a program with a new line
 * @argc: parameter for number of arguments
 * @argv: array containing args used
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

