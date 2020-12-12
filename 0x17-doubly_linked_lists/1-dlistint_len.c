#include "lists.h"
/**
 *dlistint_len - returns the amount of elements
 *@h: the inital pointer to the linked list
 *Return: returns the amount of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
