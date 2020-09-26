#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - lalalal
 *@n: dkdkdkka
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n ; n < 98; n++)
{
printf("%i, ", n);
}
}
else
{
for (n = n ; n > 98; n--)
{
printf("%i, ", n);
}
}
if (n == 98)
{
printf("98");
}
putchar('\n');
}
