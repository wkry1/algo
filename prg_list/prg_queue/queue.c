//要素の挿入は先頭から、取り出しは最後から
//First In First Out
//基本的操作：最後尾に要素を追加、先頭から要素を取り出し

#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include "Item.h"
struct QUEUEnode{
    Item item;
    link next;
};
static link head;
static link tail;

void QUEUEput(Item item){
    if(head == NULL){
        head = (tail = NEW(item, head));
        return;
    }
    tail->next = NEW(item, tail->next);
    tail = tail->next;
}

Item QUEUEget(){
    Item item = head->item;
    link t =head->next;
    free(head);
    head = t;
    return item;
}
