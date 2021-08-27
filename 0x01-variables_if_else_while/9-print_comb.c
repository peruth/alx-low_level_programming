#include <stdio.h>

/**
 * main - prints possible combinations of single digits
 * numbers are printed in ascending order
 * Return: Always 0 on (success)
 */

int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar(n);
}
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
