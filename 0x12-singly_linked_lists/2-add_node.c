#include "lists.h"
int len(const char *str);
/**
 * add_node - add a new node at the beginning of a linked list
 * @head: pointer to the head of the list
 * @str: string inputed to the first position
 * Return: return to the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}
/**
 * len - length of the string
 * @str: string
 * Return: length of the string
 */

int len(const char *str)

{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
