#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * The numbers are different
 * Return: Always 0 on (success)
 */

int main(void)
{
int a, b, c;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
for (c = 0; c < 10; c++)
{
putchar(a);
putchar(b);
putchar(c);
for (a != b && a != c && b != c)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}