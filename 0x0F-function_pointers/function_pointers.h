#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * File: main.h
 * Auth: Nason Mamu
 * Desc: Header file containing prototypes for all functions
 * used in the 0x0F-function_pointers directory.
*/

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
