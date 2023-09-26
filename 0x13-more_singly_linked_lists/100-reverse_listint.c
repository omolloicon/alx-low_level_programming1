#include "lists.h"

/**
 * reverse_listint - reverse the string
 * @head: adress to pointer
 * Return: sucess when done
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *fter, *before;

	if (head == 0 || *head == 0)
		return (0);
	before = 0;

	while ((*head)->next != 0)
	{
		fter = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = fter;
	}
	(*head)->next = before;
	return (*head);
}
