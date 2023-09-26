#include "lists.h"

/**
 * listint_len - counts characters in string
 * @h: points counter h
 * Return: done
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
