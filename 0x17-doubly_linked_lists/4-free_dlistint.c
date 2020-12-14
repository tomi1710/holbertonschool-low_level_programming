#include "lists.h"
/**
 * free_dlistint - frees memory spaceof a list
 * @head:ponter to list
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
