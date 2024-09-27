#ifndef ITEM_H
#define ITEM_H
#include <stdio.h>

typedef char* Key;
struct record{
    Key keyVal;
    int value;
};
typedef struct record *Item;

#define maxN 1000
#define maxKey 100
#define NULLitem NULL

Key ITEMrandkey(void);
Item ITEMrand(key);
void ITEMshow(Item);
Key key(Item);


#endif