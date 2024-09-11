#include <stdlib.h>
#include <stdio.h>
#include "list.h"

//線形リスト
//要素を0個以上１列に並べたもの a0,a1,a2,...
//リストの長さ；要素数n
//n=0の時、空リストという
//必要な手続き：新しいリストを作成する。要素を挿入する。(前から３番目に１を挿入する)要素を削除する.要素を順に出力する


//typedefと構造体は一緒に使おう!
//https://programming.pc-note.net/c/struct.html
//定義した構造体の変数を宣言するとき、構造体名の前にstructというキーワードを付ける手間を省ける
//typedef:既存の方に新しい名前をつける


//ファイル分割について
//C言語には.h(ヘッダファイル)と.c(ソースファイル)の2種類が存在する
//https://c-lang.sevendays-study.com/day7.html
int main(){
    //先頭への挿入・削除
    //予めリストの先頭にダミーのセルを置いておく
    link head = NEW(-999, NULL);
    for(int i=0; i<10;i++){
        insertNext(head, NEW(i,NULL));
        printList(head);
    }
    for(link t=head;t != NULL; t=t->next){
        deleteNext(head);
        printList(head);
    }
}