#include "lists.h"

/**
  * pop_listint - deletes head of the node
  * @head: pointer to the first element on the list
  * return: 0 if its there is no elemtnt in the list or n
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int  numb;

	if (!head || !*head)
	return (0);
	else
	numb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numb);
}
