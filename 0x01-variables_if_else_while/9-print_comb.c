#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit number
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');

if (num < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
