#include "main.h"

/**
 * print_square - prints the square
 * @size: is the size of the square
 * @#: prints the square
 */

void print_square(int size)
{
int i, j;

for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
if (i == 0 && i == size)
{
_putchar("#");
else if (j == 0 && j == size)
{
_putchar(" ");
}
}
}
}
_putchar('\n');
}
