#include "holberton.h"
#include <stdio.h>
/**
 *print_chessboard - adsadads
 *@a: asdadasd
 */
void print_matriz(char (*a)[3])
{
  int c, b;
  for (c = 0; c != 3; c++)
    {
      for (b = 0; b != 3; b++)
	{
	  printf("%c", a[c][b]);
	}
      putchar('\n');
    }
}
