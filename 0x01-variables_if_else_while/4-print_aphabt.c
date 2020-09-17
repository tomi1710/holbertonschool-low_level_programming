#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = "a" ; ch <= "d" ; ch = "f" ; ch <= "p" ; ch = "r" ; ch <= "z" ; ch++)
{
putchar(ch);
}

return (0);
}
