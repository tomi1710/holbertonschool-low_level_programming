#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
puts("is positive\n");
}
else if (n < 0)
{
puts("is positive\n");
}
else
{
puts("is zero\n");
}
return (0);
}
