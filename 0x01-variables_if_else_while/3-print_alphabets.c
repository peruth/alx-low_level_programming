#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase
 * followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
