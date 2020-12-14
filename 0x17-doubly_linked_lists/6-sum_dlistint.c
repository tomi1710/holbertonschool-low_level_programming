#include "lists.h"
/**
 * sum_dlistint - returns the sum of elements on a list
 * @head: pointer to list
 * Return: sum of elements in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
