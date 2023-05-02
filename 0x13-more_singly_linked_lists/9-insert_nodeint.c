#include "lists.h"
/**
  * insert_nodint_at_index - inserts a new node at a given postion
  * @head: first element in the list
  * @idx: index where the new node is set to be placed
  * @n: data to insert
  * Return: pointer to the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int b;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	for (b = 0; tmp && b < idx; b++)
	{
	if (b == idx - 1)
	{
	new->next = tmp->next;
	tmp->next = new;
	return (new);
	}
	else
	tmp = tmp->next;
	}
	return (NULL);
}

