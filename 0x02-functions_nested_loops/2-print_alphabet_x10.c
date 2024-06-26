#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char ch;
int i = 0;

while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
