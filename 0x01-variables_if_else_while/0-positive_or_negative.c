#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random number to variable n
 * print a number stored in variable n
 * followed by a newline
 * Return: Always o on (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}
