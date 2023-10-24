#include "lists.h"

/**
 * listint_len - return the number of element in a linked list
 * @h: head point
 * Return: the number of element in list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
