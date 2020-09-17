#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastdigit = n % 10;
if (lastdigit > 5) {
printf("Last digit of " n " is " lastdigit " and is greater than 5\n")
} else if (lastdigit < 6) {
printf("Last digit of " n " is " lastdigit " and is less than 6 and not 0\n")
} else {
printf("Last digit of " n " is " lastdigit " and is 0\n")
}

return (0);
}
