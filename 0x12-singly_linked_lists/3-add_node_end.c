#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: String to find the length of.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int length;

	for (length = 0; str[length]; length++)
	{
		/* Empty loop body */
	}
	return (length);
}

/**
 * add_node_end - Adds a new node to the end of a linked list.
 * @head: Double pointer to the head of the linked list.
 * @str: String to add to the new node.
 *
 * Return: Pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;
	return (new_node);
}
