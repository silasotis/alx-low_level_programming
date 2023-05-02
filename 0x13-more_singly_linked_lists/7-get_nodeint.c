#include "lists.h"
/**
  * get_nodeint_at_index - the nth element in the linked list
  * @head: points to the first element in the list
  * @index: index of he next node to be returned
  * Return: pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int x = 0;

	while (x < index && tmp)
	{
	tmp = tmp->next;
	x++;
	}
	return (tmp ? tmp : NULL);
}
