#include "lists.h"
/**
  * sum_listint - adds all values to n the element
  * @head: point to the first element in the list
  * @tmp: intilalized to the first element
  * Return: total of the summation
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
	sum = sum + tmp->n;
	tmp = tmp->next;
	}
	return (sum);
}
