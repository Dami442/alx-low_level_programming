#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all arguments received
 *@argc: int variable representing number of arguments
 *@argv: array containing the arguments
 *Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
