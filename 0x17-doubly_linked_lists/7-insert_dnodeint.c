#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node in a specific index
 * @h: pointer to list
 * @idx: index
 * @n: value to insert at new node
 * Return: new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *copy, *aux, *nex;

	if (h == NULL)
	{
		return (add_dnodeint(h, n));
	}
	copy = *h;
	for (i = 0; i < idx && copy != NULL; i++)
	{
		copy = copy->next;
	}
	if (copy == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	copy = copy->prev;
	aux = copy->next;
	new->n = n;
	copy->next = new;
	new->prev = copy;
	aux->prev = new;
	new->next = aux;
	return (copy);
}
