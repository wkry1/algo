#ifndef ITEM_H
#define ITEM_H
#include <stdio.h>

typedef int Item;
typedef int Key;

#define key(A) (A)
#define eq(A, B) (A == B)
#define less(A, B) (key(A) < key(B))
#define NULLitem -999
#define exch(A,B) {Item t=A; A=B; B=t;}

#endif