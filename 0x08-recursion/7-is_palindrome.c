#include "holberton.h"
#include <stdio.h>
int is_palindrome(char *s);
int _palindrome(char *s);
int _is_palindrome_true(char *s, int x);
/**
 *is_palindrome - asdadasda
 *@s: asdadadsa
 *Return: asdadadsasd
 */
int is_palindrome(char *s)
{
int x, z;
x = _palindrome(s);
z = _is_palindrome_true(s, x);
if (x != z)
return (1);
return (0);
}
/**
 *_palindrome - asdadads
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
/**
 *_is_palindrome_true - asdsadadsa
 *@s: asdadsad
 *@x: asdadadsasd
 *Return: asdasdadsad
 */
int _is_palindrome_true(char *s, int x)
{
if (s[0] == s[x - 1])
{
x--;
}
return (x);
}
