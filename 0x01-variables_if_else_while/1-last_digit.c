#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the last digit
 * Return: Always (Success)
 */
int main() {
int n, lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if(lastd > 5)
{
printf("The last digit of %d is %d and is greater than 5\n", n, lastd);
}
else if(lastd ==0)
{
printf("The last digit of %d is %d and is zero\n", n, lastd);
}
else if(lastd < 6 && lastd != 0)
{
printf("The last digit of %d is %d and is less than 6 not 0\n", n, lastd);
}
return 0;
}
