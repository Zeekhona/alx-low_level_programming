#include "main.h"
/**
 * positive_or_negative - Determine if number is pos or neg
 *@0 : is the number to be checked
 *Return: 0
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is zero\n", i);
}
return;
}
