#include <stdio.h>
/**
 * main - prints the numbers
 * Return: Always (Success)
 */
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar(number + '0');
}
putchar('\n');
return (0);
}
