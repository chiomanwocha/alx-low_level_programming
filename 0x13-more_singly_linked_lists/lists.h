#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>      /* Include standard I/O functions */
#include <stdlib.h>     /* Include memory allocation functions (malloc, free) */
#include <string.h>     /* Include string manipulation functions (size_t) */

/**
 * struct listint_s - Singly linked list
 * @n: Integer value
 * @next: Points to the next node
 *
 * Description: Structure for a singly linked list node
 * used in the Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
listint_t *find_listint_loop(listint_t *head);

#endif
