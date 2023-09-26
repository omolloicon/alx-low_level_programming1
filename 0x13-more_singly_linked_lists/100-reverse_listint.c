#include "lists.h"

/**
 * reverse_listint - string
 * @head: pointer to pointer
 *
 * Return: succes when done
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = 0, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		if (next)
			(*head) = next;
		else
			break;
	}
	return (*head);
}
