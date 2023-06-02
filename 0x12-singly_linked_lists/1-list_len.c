#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Calculates the number of nodes in a linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *head)
{
	int node_count = 0;

	while (head)
	{
		node_count++;
		head = head->next;
	}
	return (node_count);
}
