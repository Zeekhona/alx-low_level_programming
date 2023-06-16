#include <stdio.h>
/**
 * main - prints the numbers of base 16 in lowercase
 * Return: Always (Success)
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar('0' + number);
}
for (number = 0; number < 6; number++)
{
putchar('a' + number);
}
putchar('\n');
return (0);
}
