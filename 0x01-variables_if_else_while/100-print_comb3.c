#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * prints only small combinations of digits
 * Return: Always 0 on (success)
 */

int main(void)
{
int a, b;

for (a = 0; a < 2; a++)
{
for (b = 0; b < 2; b++)
{
putchar(a);
putchar(b);
if (a != b)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
