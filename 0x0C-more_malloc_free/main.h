#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int _strlen(char *s);
void errors(void);
int is_digit(char *s);

#endif
