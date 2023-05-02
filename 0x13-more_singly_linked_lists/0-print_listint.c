#include "lists.h"

/**
  * print_listint - prints all elements of a linked list
  * @h: is a linked list of type listint_t
  * Return: num of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t rtn = 0;

	while (h)
	{
	printf("%d\n", h->n);
	rtn++;
	h = h->next;
	}
	return (rtn);
}

