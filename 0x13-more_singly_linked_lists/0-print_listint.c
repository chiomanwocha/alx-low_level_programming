#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Linked list of type listint_t to print.
 *
 * Return: Number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

