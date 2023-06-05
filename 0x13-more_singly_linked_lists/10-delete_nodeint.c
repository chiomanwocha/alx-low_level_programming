#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position in a linked list.
 * @head: Pointer to the head pointer of the linked list.
 * @index: Index of the node to delete.
 * Return: 1 if succeeded, or -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	/* Account for empty list */
	if (*head == NULL)
		return (-1);

	tmp = *head;

	/* Handle deleting the beginning node */
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	/* Iterate tmp to the node prior to the node we want to delete */
	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	/* Account for index out of range: don't delete and return */
	if (i != (index - 1) || tmp->next == NULL)
		return (-1);

	/* Link the prior node before the delete node */
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);

	return (1);
}

