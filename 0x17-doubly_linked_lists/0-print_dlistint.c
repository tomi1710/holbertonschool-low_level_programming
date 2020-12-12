#include "lists.h"
/**
 *print_dlistint - prints elements of a list
 *@h: the inital pointer to the linked list
 *Return: returns the amount of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
