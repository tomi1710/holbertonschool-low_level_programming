#include "holberton.h"

char *_strstr(char *haystack, char *needle)
{
  char arr[98];
  int a, b, i = 0;

  for (a = 0; haystack[a] != '\0'; a++)
    {
      for (b = 0; needle[b] != '\0'; b++)
	{
	  if (haystack[a] == needle[b])
	    {
	      arr[i] = haystack[a];
	      i++;
	    }
	}
      if (arr == needle)
	{
	  return (needle);
	}
      if (i > 0 && arr[i] != haystack[a]
	{
	  i = 0;
	}
    }
  return (0);
}
