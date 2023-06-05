#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 * @head: Pointer to the head pointer of the linked list.
 * Return: The data of the deleted head node.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL) /* Check if the linked list is empty */
		return (0);

	tmp = *head;

	data = tmp->n; /* Save the data of the head node to return later */

	*head = tmp->next; /* Update the head pointer to point to the next node */
	free(tmp); /* Free the memory of the deleted head node */

	return (data);
}

