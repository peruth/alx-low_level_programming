#include "main.h"

/**
 * main - prints 0 times the alphabet in lowercase
 * Followed by a newline
 * Return: Always 0 on (success)
 */

void print_alphabet_x10(void);
{
char ch;
int i;

for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
}
putchar('\n');
}
