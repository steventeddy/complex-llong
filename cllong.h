#ifndef CLLONG_H
#define CLLONG_H

#include<stdio.h>

typedef struct{

	long long real, imag;

}cllong;

void cll_set(cllong* op, long long real, long long imag);
void cll_get(cllong* rop, cllong op);

void cll_add(cllong* rop, cllong op1, cllong op2);
void cll_sub(cllong* rop, cllong op1, cllong op2);
void cll_mul(cllong* rop, cllong op1, cllong op2);
void cll_conjugate(cllong* rop, cllong op);
void cll_norm2(cllong* rop, cllong op);

long long cll_real(cllong op);
long long cll_imag(cllong op);

void cll_print(cllong op);

#endif
