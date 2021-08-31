#include <stdio.h>

/**
 * integer_add carries out the addition of two integers
 * integers x and y are declared and later given values
 * Return the values
 */

int integer_add(int x, int y)
{
add result;
result = x + y;
return result;
}

/**
 * main - adds two integers
 * integer_add provides the result
 * Return: Always 0 on (success)
 */

int main(void)
{
int sum;

sum = integer_add(89, 9)
printf("The sum of  89 and 9 is:\n", sum);
return (0);
}
