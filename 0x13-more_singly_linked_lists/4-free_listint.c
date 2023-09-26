#include "lists.h"

/**
 * free_listint - fuction to free list
 * @head: main ptr
 */

void free_listint(listint_t *head)
{
	listint_t *grdy;

	while (head)
	{
		grdy = head->next;
		free(head);
		head = grdy;
	}
}
