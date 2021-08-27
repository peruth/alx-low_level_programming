#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
char ch;

for (ch = 'z'; ch <= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
