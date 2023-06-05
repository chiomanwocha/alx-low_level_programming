#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a linked list.
 * @head: Pointer to the head pointer of the linked list.
 * @idx: Index to insert the new node.
 * @n: Data for the new node.
 * Return: Address of the new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *tmp;

	/* Check for empty pointer */
	if (head == NULL)
		return (NULL);

	/* Allocate memory and set values for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Handle index 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Iterate to the node before the desired index to insert */
	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL) /* Account for index out of range */
		{
			free(new_node);
			return (NULL);
		}
	}

	/* Link the new node into the list */
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}

