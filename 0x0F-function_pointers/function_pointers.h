#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
/**
 * File: main
 *
 * Desc: header file
 */
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
