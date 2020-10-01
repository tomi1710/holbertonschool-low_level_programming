#include "holberton.h"

char *rot13(char *a)
{
  int i, i2;
  char s[] = {"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQ"};

  for (i = 0; a[i] != '\0'; i++)
    {
      for (i2 = 0; s[i2] != '\0'; i2++)
	{
	  if (a[i] == s[i2])
	    {
	      a[i] = s[i2 + 13];
	    }
	}
    }
  return (a);
}
