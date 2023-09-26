#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a list safely
 * @head: address of the first element
 * Description: goes through a list only once
 *
 * Return: number of nodes
 * exits with status 98 if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *now, *next = head;
	size_t nodes = 0;

	if (head == 0)
		exit(98);

	while (next)
	{
		now = next;
		printf("[%p] %d\n", (void *)now, now->n);

		nodes++;
		next = next->next;
		if (current < next)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
	}
	return (nodes);
}                                                                       
