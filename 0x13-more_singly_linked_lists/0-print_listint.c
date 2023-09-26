#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a program to print list of integers
 * @h: a pointer
 * Return: succes when done
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
