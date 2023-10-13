#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*f)(int a, int b);
int (*get_op_func(char *s))(int, int);
int op_sub(int a, int b);
int main(int argc, char *argv[]);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
