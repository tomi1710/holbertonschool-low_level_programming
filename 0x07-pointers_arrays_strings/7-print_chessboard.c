#include "holberton.h"
#include <stdio.h>
/**
 *print_chessboard - adsadads
 *@a: asdadasd
 */
void print_chessboard(char (*a)[8])
{
int c, b;
for (c = 0; c != 8; c++)
{
for (b = 0; b != 8; b++)
{
printf("%c", a[c][b]);
}
putchar('\n');
}
}
