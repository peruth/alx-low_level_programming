#include <stdio.h>

/**
 * main - print single digit number dtarting from 0 using putchar
 * followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}