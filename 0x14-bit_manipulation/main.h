#ifndef LISTS_H

#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _strlen_recursion(const char *s);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
