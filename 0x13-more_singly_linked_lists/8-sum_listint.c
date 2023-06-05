#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The sum of the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

