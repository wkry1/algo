#include "list.h"

//ノードの生成
link NEW(int item, link next){
    link x = malloc(sizeof *x);
    x->item = item;
    x->next = next;
    return (x);
}

//挿入と削除
void insertNext(link x, link t){
    t->next = x->next;
    x->next = t;
}

link deleteNext(link x){
    t = x->next;
    x->next = t->next;
    return t;
}




//リストの反復処理
/*
for(t = head->next; t != NULL; t=t->next){
    dosomething(t);
}

*/

//リストの前要素出力
void printList(link x){
    for(link t = x->next; t!=NULL; t=t->next){
        printf("%d",t->item);
    }
    printf("\n");
}

//ここまでがimplementation:データ型を記述するプログラム