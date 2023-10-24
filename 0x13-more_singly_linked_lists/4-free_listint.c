#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer head
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
