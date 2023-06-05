#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the desired node.
 * Return: The nth node, or NULL if failed.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL) /* Iterate until the end of the list or reaching the desired index */
	{
		head = head->next;
		i++;
	}

	if (i == index) /* Check if the desired index was within the size of the list */
		return (head);

	return (NULL);
}

