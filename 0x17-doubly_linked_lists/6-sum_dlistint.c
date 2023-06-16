#include "lists.h"
/**
  * sum_dlistint - Sums all the data in the function..
  * @head: The head of the dlistint_t list.
  *
  * Return: The sum of all the data.
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}

