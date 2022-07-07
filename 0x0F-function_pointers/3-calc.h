#ifndef _CALC_H_
#define _CALC_H_

#include <stdlib.h>
#include <stdio.h>
/**
 * struct op - struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int y, int x);
} op_t;

int op_add(int y, int x);
int op_sub(int y, int x);
int op_mul(int y, int x);
int op_div(int y, int x);
int op_mod(int y, int x);
int (*get_op_func(char *s))(int, int);

#endif