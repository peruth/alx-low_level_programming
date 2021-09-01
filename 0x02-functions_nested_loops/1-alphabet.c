#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Followed by a newline
 * Return: Always 0 on (success)
 */

void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
