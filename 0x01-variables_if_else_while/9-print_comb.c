#include <stdio.h>

/**
 * main - prints possible combinations of single digits
 * numbers are printed in ascending order
 * Return: Always 0 on (success)
 */

int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
