#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the head pointer of the linked list.
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	/* Account for no pointer and empty list */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* Iterate through the list to reverse the linking */
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next; /* Keep track of the next node to move to */
		(*head)->next = prev; /* Link the current node's pointer to the previous node */
		prev = *head; /* Update the previous node to be the current node */
		*head = next; /* Move to the next node */
	}
	(*head) = prev; /* Unlink the last element from NULL and point it backwards */

	return (*head);
}

