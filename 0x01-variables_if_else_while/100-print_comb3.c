#include <stdio.h>
/**
 * main - prints combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b;

for (a = 0; a < 10; a++)
{
for (b = a + 1; b < 10; b++)
{
/* Print the first digit */
putchar(a + '0');
/* Print the second digit */
putchar(b + '0');

/* Print ',' after each combination except the last one */
if (a != 8 || b != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
