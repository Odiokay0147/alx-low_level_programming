#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer head
 * @index: index of the node starting at 0
 * Return: if node does not exit, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
