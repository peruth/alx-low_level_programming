#include <stdio.h>
void print_alphabet_x10(void);

/**
 * main - prints 0 times the alphabet in lowercase
 * Followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
char ch;
int n, i;

n = 10;

for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
