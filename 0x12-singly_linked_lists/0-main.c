#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 *
 * Description: This function demonstrates the usage of the linked list functions.
 * It creates a linked list, adds a new node at the beginning, prints the list,
 * frees the memory, and prints the list again.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }

    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;

    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");

    free(new->str);
    new->str = NULL;

    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}

