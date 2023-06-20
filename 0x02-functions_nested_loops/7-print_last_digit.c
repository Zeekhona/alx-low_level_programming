#include "main.h"
/**
 * print_lasy_digit - computes the absolute value of an integer
 *@c: The number to be computed
 * Return: value of digit number
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
