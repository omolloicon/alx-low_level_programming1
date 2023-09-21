#include <stdlib.h>
#include "lists.h"

/**
 * free_list - clears the list
 *
 * @head: shows the list
 */
void free_list(list_t *head)
{
	list_t *store;

	while (head)
{
	store = head->next;
	free(head->str);
	free(head);
	head = store;
}
}
