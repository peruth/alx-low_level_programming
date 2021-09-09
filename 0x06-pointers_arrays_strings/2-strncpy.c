#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string copied into
 * @src: string copied to
 * @n: number of times a string is copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
