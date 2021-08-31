#include <stdio.h>

/**
 * main - prints 9 times table
 * starting with a 0
 * Return: Always 0 on (success)
 */

int main(void)
{
int n, i;

n = 9;
i = 0;

printf("The 9 times table");
for (i = 0; i < 10; i++);
{
printf("%d * %d = %d", n, i, n*i);
}
printf("\n");
return (0);
}
