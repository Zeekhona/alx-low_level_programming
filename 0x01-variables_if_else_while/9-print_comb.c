#include <stdio.h>
/**
 * main - prints the  possible combinations of single-digit numbers
 * Return: Always (Success)
 */
int main(void)
{
int number;
for (number = 48; number <= 57; number++)
{
putchar(number);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
