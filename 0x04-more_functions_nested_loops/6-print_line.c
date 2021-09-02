#include "main.h"

/**
 * print_line - draws a straight line
 * character is printed n times
 * Return: 0 on (success)
 */

void print_line(int n)
{
char i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
