#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
int letters;
for (letters = 'z'; letters >= 'a'; letters--)
{
putchar(letters);
}
putchar('\n');
return (0);
}
