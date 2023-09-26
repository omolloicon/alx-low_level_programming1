#include "lists.h"

/**
 * reverse_listint - reverse string.
 * @head: pointer pointer
 *
 * Return: done
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *after, *before;

	if (head == 0 || *head == 0)
		return (0);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	(*head)->next = before;

	return (*head);
}
