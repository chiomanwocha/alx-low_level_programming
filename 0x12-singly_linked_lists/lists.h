#ifndef LISTS_H
#define LISTS_H


/**
 * @str: a string that has been dynamically allocated
 * @len: the length of the string
 * @next: a pointer that points to the next node
 *
 * Description: This structure represents a node in a singly linked list.
 * The `str` field contains a string that has been dynamically allocated using `malloc`.
 * The `len` field represents the length of the string.
 * The `next` field is a pointer that points to the next node in the list.
 * This structure is used in the context of the Holberton project.
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function declarations */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
