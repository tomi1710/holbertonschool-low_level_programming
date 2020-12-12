#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
  i = 0;

  while (h != NULL)
    {
      printf("%i", h);
      h->next;
      i++;
    }
  return(i);
}
