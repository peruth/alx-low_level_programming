#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: s1 is compared to s2
 * @s2: s2 is compared to s1
 *
 * Return: less than 0 s1 is less than s2, 0 if they are equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
