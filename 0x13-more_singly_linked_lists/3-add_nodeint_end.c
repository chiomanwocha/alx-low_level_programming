#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to the head pointer of the linked list
 * @n: Data to add to the new node
 * Return: Address of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t)); /* Allocate memory for the new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Set the data value of the new node */
	new_node->next = NULL; /* Set the next pointer of the new node to NULL */

	if (*head == NULL) /* If the list is empty, make the new node the head */
		*head = new_node;
	else
	{
		tmp = *head; /* Traverse to the end of the list */
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node; /* Link the last node to the new node */
	}

	return (new_node);
}

