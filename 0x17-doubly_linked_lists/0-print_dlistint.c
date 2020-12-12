#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
  int i = 0;

  while (h != NULL)
    {
      printf("%i\n", h->n);
      h = h->next;
      i++;
    }
  return(i);
}
