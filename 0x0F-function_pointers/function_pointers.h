#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/**
 * File: function_pointers.h
 * Desc: contains prototypes for the project
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
