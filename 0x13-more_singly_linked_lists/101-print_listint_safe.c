#include "lists.h"

/**
 * count_nodes_till_loop - Counts the number of unique nodes in the list before a loop.
 * @head: Pointer to the head pointer of the linked list.
 * Return: Number of unique nodes in the list before a loop.
 */
int count_nodes_till_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		count++;

		if (turtle == hare)
		{
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * loop - Checks if there's a loop in the linked list.
 * @head: Pointer to the head pointer of the linked list.
 * Return: 0 if no loop, 1 if loop.
 */
int loop(const listint_t *head)
{
	const listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - Prints the linked list with addresses.
 * @head: Pointer to the head pointer of the linked list.
 * Return: Number of nodes in the list, or exits with code 98 if failed.
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	int loop_found;
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	loop_found = loop(head);

	if (loop_found == 1) /* Print up to the last node before the loop if a loop is present */
	{
		count = count_nodes_till_loop(head);
		for (loop_found = 0; loop_found < count; loop_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0) /* Print the list regularly up to NULL if no loop is present */
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}

	return (num_nodes);
}

