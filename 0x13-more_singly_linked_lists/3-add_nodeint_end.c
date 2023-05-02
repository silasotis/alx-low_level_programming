#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: points to the first element in the list
  * @n: data to be used
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *woh;

	woh = malloc(sizeof(listint_t));
	if (!woh)
	return (NULL);

	woh->n = n;
	woh->next = NULL;

	if (*head == NULL)
	{
	*head = woh;
	return (woh);
	}
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = woh;

	return (woh);
}
