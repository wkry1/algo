#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#include "../Item.h"

//stack(pushdown)
//要素の挿入および削除がいつも先頭からなされるリストの一種
//LIFO(Last In First Out)
//基本操作
//先頭に要素を挿入(push),先頭から要素を削除(pop)

typedef struct STACKnode *STACKlink;
struct STACKnode{
    Item item;
    STACKlink next;
};

static STACKlink head;
//listのを使うと競合してしまう
STACKlink STACK_NEW(Item item, STACKlink next){
    STACKlink x = malloc(sizeof *x);
    x->item = item;
    x->next = next;
    return x;
}

void STACKinit(int maxN){
    head = NULL;
}

int STACKempty(){
    return head == NULL;
}

void STACKpush(Item item){
    head = STACK_NEW(item ,head);
}

Item STACKpop(){
    Item item = head->item;
    STACKlink t = head->next;
    free(head);
    head =t;
    return item;
}

