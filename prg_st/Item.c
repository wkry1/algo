#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "item.h"

Item ITEMrand(Key key){
    Item item = malloc(sizeof (Item));

    item->keyVal = malloc(sizeof(Key));
    //http://www9.plala.or.jp/sgwr-t/lib/strcpy.html
    //文字列のコピー：s1にs２を'\０'までコピーする
    strcpy(item->keyVal, key);
    item->value = (rand()%maxN);
    return item;
}

void ITEMshow(Item item){
    if(item != NULLitem)
        printf("Key: %s, value: %d\n", item->keyVal, item->value);

    else   
        printf("NULLitem \n");
}

Key key(Item item){
    return (item == NULLitem) ? '\0' : item->keyVal;
}