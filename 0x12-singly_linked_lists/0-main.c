#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t custom_print_list(const list_t *head); /* Function declaration */

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
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
    new->string = strdup("Hello");
    new->length = 5;
    new->next = head;
    head = new;
    n = custom_print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->string);
    new->string = NULL;
    n = custom_print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}

