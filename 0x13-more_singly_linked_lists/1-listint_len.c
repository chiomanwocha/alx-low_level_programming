#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @head: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t listint_len(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head != NULL)
	{
		num_nodes += 1;
		head = head->next;
	}

	return (num_nodes);
}

