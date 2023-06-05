#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL) /* Check if the linked list is empty */
		return;

	while (head != NULL) /* Iterate through each node */
	{
		current = head; /* Keep track of the current node */
		head = head->next; /* Move to the next node */
		free(current); /* Free the memory of the current node */
	}
}

