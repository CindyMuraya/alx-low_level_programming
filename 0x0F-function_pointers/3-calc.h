<<<<<<< HEAD
<<<<<<< HEAD
#ifndef CALC_H
#define CALC_H

/*
 * Description: contain all the function prototypes and
 * data structures used by the program
=======
=======
>>>>>>> main
#ifndef CALC_h
#define CALC_H

/*
 * Description: contains all the function prototypes
 * and data structures used by the program
<<<<<<< HEAD
>>>>>>> main
=======
>>>>>>> main
 */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
<<<<<<< HEAD
<<<<<<< HEAD
=======
int (*get_op_func(char *s))(int, int);
>>>>>>> main
=======
int (*get_op_func(char *s))(int, int);
>>>>>>> main

#endif
