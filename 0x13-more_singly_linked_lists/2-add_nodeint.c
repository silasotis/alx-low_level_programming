#include "lists.h"
/**
  * add_nodeint - adds a new node at the beginning of a linked list
  * @head: pointer to the pointer of the first element in the list
  * @n: data to insert in the niw node
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *woh;

	woh = malloc(sizeof(listint_t));
	if (!woh)
	return (NULL);

	woh->n = n;
	woh->next = *head;
	*head = woh;

	return (woh);
}
