#include "lists.h"

/**
 * add_nodeint_end - add node to end list
 * @head: pointer to pointer
 * @n: integer count
 * Return: done when sucess
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *prev = *head;

	current = malloc(sizeof(listint_t));
	if (!current)
	{
		free(current);
		return (0);
	}
	current->n = n;
	current->next = 0;
	if (*head == 0)
		*head = current;
	else
	{
		while (prev->next)
			prev = prev->next;
		prev->next = current;
	}
	return (current);
}
