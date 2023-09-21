#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node
 * @head: main elements
 * @str: insert this
 * Return:sucess when done
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
