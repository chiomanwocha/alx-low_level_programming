#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL.
 * @head: Pointer to the head pointer of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL) /* Check if the pointer is NULL */
		return;

	while (*head != NULL) /* Iterate through each node */
	{
		current = *head; /* Keep track of the current node */
		*head = current->next; /* Move to the next node */
		free(current); /* Free the memory of the current node */
	}

	*head = NULL; /* Set the head pointer to NULL */
}

