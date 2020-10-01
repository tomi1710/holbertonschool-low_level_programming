#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: takes in first string
 * @s2: takes in second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}
