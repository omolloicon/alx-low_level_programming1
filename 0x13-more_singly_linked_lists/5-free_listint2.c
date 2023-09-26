#include "lists.h"

/**
 * free_listint2 - frees list.
 * @head: pointer pointer
 * Description: free string.
 */

void free_listint2(listint_t **head)
{
	listint_t *ujn;

	if (head == 0)
		return;

	while (*head)
	{
		ujn = (*head)->next;
		free(*head);
		*head = ujn;
	}

	head = 0;
}
