#include "holberton.h"
#include <stdio.h>
/**
 *print_array - asdadsd
 *@a: sfsnjfnesk
 *@n: dsjfnjsfbjs
 */
void print_array(int *a, int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%i, ", a[i]);
}
printf("%i\n", a[i]);
}
}
