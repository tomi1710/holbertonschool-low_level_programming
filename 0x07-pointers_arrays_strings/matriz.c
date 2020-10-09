#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char board[4][7] = {
    {'*', ' ', '0', ' ', '1', ' ', '2'},
    {'0', ' ', ' ', '|', ' ', '|', ' '},
    {'1', ' ', ' ', '|', ' ', '|', ' '},
    {'2', ' ', ' ', '|', ' ', '|', ' '},
  };
  print_matriz(board);
  return (0);
}
