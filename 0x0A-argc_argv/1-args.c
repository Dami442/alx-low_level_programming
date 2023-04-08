#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the no. of arguments passed
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
