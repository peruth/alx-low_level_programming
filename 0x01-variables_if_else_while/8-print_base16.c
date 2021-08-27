#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
int n;
char ch;

for (n = 0; n < 10; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
