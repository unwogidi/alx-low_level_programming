#include <stdio.h>
/**
 * main - print single digits of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 10; digit++)
{
putchar(digit + 48);
}
putchar('\n');
return (0);
}
