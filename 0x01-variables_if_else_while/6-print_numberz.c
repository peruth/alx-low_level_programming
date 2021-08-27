#include <stdio.h>

/**
 * main - print single digit number dtarting from 0 using putchar
 * followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
