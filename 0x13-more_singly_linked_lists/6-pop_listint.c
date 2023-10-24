#include "lists.h"

/**
 * pop_listint - delete the head note of a linked list
 * and return the head nodes data
 * @head: pointer head
 * Return: If linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	i = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
