#ifndef list_h
#define list_h
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - individual
 * @store: our string
 * @cap: capacity
 * @proc: what follows
 */

typedef struct list_s
{
        char *store;
        unsigned int cap;
        struct list_s *proc;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
