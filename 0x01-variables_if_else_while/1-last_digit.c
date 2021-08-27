#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a randon number to int n
 * prints the last number stored in n
 * followed by a newline
 * Return: Always 0 on (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
 printf("Last digit of %d is %d

	return (0);
}
