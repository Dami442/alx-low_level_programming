#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: ptr to the head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t n = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}

