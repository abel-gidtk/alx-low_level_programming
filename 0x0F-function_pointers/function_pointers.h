#ifndef FUNC_PTR
#define FUNC_PTR
#include <stddef.h>

int _putchar(char);
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void(*action)(int));
int int_index(int *, int, int (*cmp)(int));

#endif
