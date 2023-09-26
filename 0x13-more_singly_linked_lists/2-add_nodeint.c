#include "lists.h"

/**
 * add_nodeint - fuction that adds node to the string
 * @head: pointer to pointer
 * @n: what should be added
 * Return: done if succes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (!current)
	{
		free(current);
		return (0);
	}

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
