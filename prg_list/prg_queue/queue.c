#include <stdlib.h>
#include <stdio.h>
#include "../Item.h"
#include "queue.h"
typedef struct QUEUEnode *QUEUElink;
struct QUEUEnode{
    Item item;
    QUEUElink next;
};
static QUEUElink head;
static QUEUElink tail;

QUEUElink QUEUE_NEW(Item item, QUEUElink next){
    QUEUElink x = malloc(sizeof *x);
    x->item = item;
    x->next = next;
    return x;
}

void QUEUEinit(){
    head = tail = NULL;
}

int QUEUEempty(){
    return head == tail;
}

void QUEUEput(Item item){
    if(head == NULL){
        head = (tail = QUEUE_NEW(item, head));
        return;
    }
    tail->next = QUEUE_NEW(item, tail->next);
    tail = tail->next;
}

Item QUEUEget(){
    Item item = head->item;
    QUEUElink t =head->next;
    free(head);
    head = t;
    return item;
}
