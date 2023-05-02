#include "lists.h"
/**
  * listint_len - returns the number of elements in a linked list
  * @h: linked list of type listint_t set to traverse
  * return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t rtn = 0;

	while (h)
	{
	rtn++;
	h = h->next;
	}
	return (rtn);
}
