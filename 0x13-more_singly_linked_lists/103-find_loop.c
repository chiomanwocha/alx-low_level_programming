#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list.
 * @head: Pointer to the head pointer of the linked list.
 * Return: Address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	/* Determine if a loop exists by using the turtle and hare algorithm */
	/* Start them at the head, move turtle one node and hare two nodes */
	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{
			/* Start turtle at the head and hare at the address they met */
			/* Move turtle and hare one node at a time to find the loop origin */
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			return (turtle);
		}
	}

	return (NULL);
}

