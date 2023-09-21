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
	list_t *j;
	unsigned int len = 0;

	while (str[len])
		len++;
	j = malloc(sizeof(list_t));
	if (!j)
		return (0);
	j->str = strdup(str);
	j->len = len;
	j->next = (*head);
	(*head) = j;
	return (*head);
}
