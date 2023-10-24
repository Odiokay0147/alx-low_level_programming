#include "lists.h"

/**
 * sum_listint - sun up all the data in a linked list
 * @head: pointer head
 * Return: sum, otherwise 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
