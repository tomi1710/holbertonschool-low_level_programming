#include "holberton.h"
#include <stdio.h>
int is_palindrome(char *s);
int _palindrome(char *s);
int _is_palindrome_true(char *s, int x);

int is_palindrome(char *s)
{
  int x, z;
  x = _palindrome(s);
  z = _is_palindrome_true(s, x);
  if (x != z)
    return (1);
  return(0);
}

/**
 *is_palindrome - asdadads
 *@s: adsasdadsad
 *Return: asdadssada
 */
int _palindrome(char *s)
{
  if (s[0] == '\0')
    {
      return (0);
    }
  else
    {
      return (1 + _palindrome(s + 1));
    }
  return (0);
}

int _is_palindrome_true(char *s, int x)
{
  if (s[0] == s[x - 1] && s[1] == s[x-2])
    {
      x--;
      x--;
      s = &s[0];
      return (_is_palindrome_true(s + 1, x));
    }
  return (x);
}
