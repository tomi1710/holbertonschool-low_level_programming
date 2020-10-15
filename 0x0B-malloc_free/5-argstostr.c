#include "holberton.h"
#include <stdlib.h>
/**
 * get_length - function to count string length
 * @str: takes in string
 * Return: returns string length
 */
int get_length(char *str)
{
  int l;

  for (l = 0; str[l] != '\0'; l++)
    {
      continue;
    }

  return (l);
}

/**
 * argstostr - concats all arguments of program
 * @ac: takes in arguments
 * @av: array of arguments
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
  char *string;

  int i, j, k, total_args = 0;

  if (ac == 0 || av == NULL)
    {
      return ('\0');
    }
  for (i = 0; i < ac; i++)
    {
      total_args += get_length(av[i]) + 1;
    }

  string = malloc(sizeof(char) * total_args + 1);
  if (string == NULL)
    {
      return ('\0');
    }

  for (i = 0, k = 0; i < ac; i++)
    {
      for (j = 0; av[i][j] != '\0'; j++, k++)
	{
	  string[k] = av[i][j];
	}
      string[k] = '\n';
      k++;
    }
  string[k] = '\0';
  return (string);
}
