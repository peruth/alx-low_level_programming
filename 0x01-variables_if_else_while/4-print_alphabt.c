#include <stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 * followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
char ch;

do(ch = 'a'; ch <= 'z') {
putchar(ch);
}
while (ch != q && ch != e)
return (0);
}
