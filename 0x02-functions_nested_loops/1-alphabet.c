#include "main.h"
/**
 * main - Prints alphabet in lower case
 * @c: check alphabet and print lowercase
 * Return: void
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
