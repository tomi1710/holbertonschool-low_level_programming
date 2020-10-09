#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int coins, amount = 0;

  if (argv[1] < 0)
    {
      printf("0");
      return (
  if (argc != 2)
    {
      printf("Error\n");
      return(1);
    }
  coins = atoi(argv[1]);

  while (coins >= 25)
    {
      coins = coins - 25;
      amount++;
    }
  while (coins >= 10)
    {
      coins = coins - 10;
      amount++;
    }
  while (coins >= 5)
    {
      coins = coins - 5;
      amount++;
    }
  while (coins >= 2)
    {
      coins = coins - 2;
      amount++;
    }
  while (coins >= 1)
    {
      coins = coins - 1;
      amount++;
    }
  printf("%d\n", amount);
  return(0);
}
