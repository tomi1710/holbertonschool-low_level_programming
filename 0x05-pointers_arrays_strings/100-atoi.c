#include <stdio.h>
/**
 * _atoi - sdfas
 *@s:sdfasd
 *Return: sdfasd
 */
int _atoi(char *s)
{
  int i, a, b = 0, c, res = 0;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] >= 0 && s[a] <= 9)
{
if (s[a - 1] == '-')
{
s[0] = '-';
b = 1;
}
while (s[a] >= 0 && s[a] <= 9)
{
s[b] = s[a];
a++;
b++;
}
}
}
i = 0;
if (s[b] == '-')
{
i = 1;
}
for (; i <= b; i++)
{
res = res * 10 + s[i] - '0';
}
return (res);
}
