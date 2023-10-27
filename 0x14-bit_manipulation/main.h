#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* Protypes */

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

int _putchar(char c);

 /**
  * struct endiandata - holds the value and byte indicators for endianness.
  * @vslue: unsigned integer.
  * @byte_indicator: byte to indicate endianness.
  *
  * Description: has data for endinness.
  */
typedef struct endiandata
{
	unsigned int value;
	unsigned char byte_indicator;
} data;

int get_endianness(void);

#endif
