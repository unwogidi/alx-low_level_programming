#include <stdio.h>

/**
 * main - print lowercase of alphabet without e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
