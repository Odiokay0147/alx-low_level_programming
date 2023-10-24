#include "lists.h"

/**
 * create_new_node - create new node
 * @n: number of node
 * Return: pointer to node
 */
listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head of the list
 * @idx: index of the list where the new node should be added
 * @n: number of new node
 * Return: the address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *tmp;
	listint_t *tmp_old;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;
	for (j = 0; j < idx - 1 && tmp != NULL && idx != 0; j++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = tmp;
	else
	{
		tmp_old = tmp->next;
		tmp->next = new_node;
		new_node->next = tmp_old;
	}
	return (new_node);
}
