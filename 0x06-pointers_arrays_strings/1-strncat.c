#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes src is to concatenate
 *
 * Return: pointer to a resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (j = 0; dest[j] != '\0'; j++)
{
for (i = 0; src[i] != '\0'; i++)
{
if (src[i] < n)
{
dest[j] = src[i];
}
}
dest[j] = '\0';
}
return (dest);
}
