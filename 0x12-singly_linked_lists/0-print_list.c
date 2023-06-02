#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * custom_print_list - Prints the elements of a linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t custom_print_list(const list_t *head)
{
	int count = 0;

	while (head)
	{
		if (head->string == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->length, head->string);
		}
		count++;
		head = head->next;
	}
	return (count);
}
