#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: ptr prameter to the list
 *
 * Return: n
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t n = 0;


	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
			current = current->next;
			n++;
	}

	return (n);
}
