//Array Based IMPLEMENTATION
#include <stdlib.h>
#include "Item.h"
#include "ST.h"

static Item *st;
static int N;

void STinit(int maxN){
    st = malloc((maxN)*sizeof(Item));
    N=0;
}

int STcount(){
    return N;
}

void STinsert(Item item){
    int j = N++;
    Key v = key(item);
    while(j>0 && less(v, key(st[j-1]))){
        st[j] = st[j-1]
        j--;
    }
    st[j] = item;
}

Item STsearch(Key v){
    int j;
    for(j=0; j<N;j++){
        if(eq(v, key(st[j])))
            return st[j];
        if(less(v, key(st[j])))
            break;
    }
    return NULLitem;
}