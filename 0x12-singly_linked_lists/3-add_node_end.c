#include "lists.h"

/**
 * add_node_end - size of strn
 * @head: begging
 * @str: string to use
 *
 * Return: sucess when done
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start, *stop;
	unsigned int cap = 0;
	if (str == 0)
		return (0);
	start = malloc(sizeof(list_t));
	if (start == 0)
		return (0);
	start->str = strdup(str);
	if (start->str == 0)
	{
		free(start);
		return (0);
	}
	while (str[cap])
		cap++;
	start->len = cap;
	start->next = 0;
	if (*head == 0)
	{
		*head = start;
		return (start);
	}
	stop = *head;
	while (stop->next)
		stop = stop->next;
	stop->next = start;
	return (start);
}
