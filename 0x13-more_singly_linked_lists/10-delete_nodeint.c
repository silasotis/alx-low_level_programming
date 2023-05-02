#include "lists.h"
/**
  * delete_nodeint_at_index - deletes a node at a certain index
  * @head: points to the first element in the list
  * Return: 1 for success or -1 for fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *wrking = NULL;
	unsigned int b = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(tmp);
	return (1);
	}
	while (b < index - 1)
	{
	if (!tmp || !(tmp->next))
	return (-1);
	tmp = tmp->next;
	b++;
	}
	wrking = tmp->next;
	tmp->next = wrking->next;
	free(wrking);

	return (1);
}
