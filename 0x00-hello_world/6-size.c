#include <stdio.h>

int main(void)
{
/*sizeof evaluates the size of various types*/
printf("size of a char: %ld bytes\n", sizeof(char));
printf("size of an int: %ld bytes\n", sizeof(int));
printf("size of a long int: %ld bytes\n", sizeof(long int));
printf("size of a long long int: %ld bytes\n", sizeof(long long int));
printf("size of a float: %ld bytes\n", sizeof(float));
return (0);
}
