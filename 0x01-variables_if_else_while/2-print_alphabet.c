#include <stdio.h>
/**
 * main - prints the alphabets
 * Return: Always (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++) {
putchar(letter);
}
putchar('\n');
return (0);
}
