#include <stdio.h>
#include "lists.h"

/**
 * print_list - display of elements
 * @h: characters
 *
 * Return: sucess we done
**/

size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->proc;
		k++;
	}
	return (k);
}
