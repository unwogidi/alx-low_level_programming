#include <stdio.h>

/**
 * main - prints alphabets in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

/* Prints lowercase aphabets */
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

/* Prints uppercase alphabets */
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
/* puts a newline */
putchar('\n');
return (0);
}
