#ifndef ST_H
#define ST_H

#include "Item.h"

void STinit(int); //記号表を作成
//int STcount(); //項目数を返す
void STinsert(Item); //新しい項目を挿入
Item STsearch(Key); //与えられたキーを持つ項目を探索
void STdelete(Item); //指定された項目を削除
//Item STselect(int); //k番目の項目を選択
//void STsort(*visit)(Item); //記号表を整列

#endif
