#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Input string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of a list_t list.
 * @str: String value to insert into the new node.
 *
 * Return: Pointer to the newly added node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
    new_node->len = _strlen(str);
    new_node->next = *head;

	*head = new_node;

	return (new_node);
}
