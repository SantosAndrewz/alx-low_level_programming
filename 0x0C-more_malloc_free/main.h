#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

int _putchar(char c);

int is_digit(char *s);

int _strlen(char *s);

void errors(void);

int main(int argc, char *argv[]);

#endif
