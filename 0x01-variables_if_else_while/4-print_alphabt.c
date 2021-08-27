#include <stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 * followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++
}
putchar('\n');
return (0);
}
