#ifndef LISTS_H
#define LISTS_H

typedef struct list_s
{
	char *string;
	unsigned int length;
	struct list_s *next;
} list_t;

size_t print_custom_list(const list_t *head);
size_t get_custom_list_length(const list_t *head);
list_t *add_custom_node(list_t **head, const char *str);
list_t *add_custom_node_end(list_t **head, const char *str);
void free_custom_list(list_t *head);

#endif
