//木の要素数をカウント、高さを求める
#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"

/*
                E
              /   \
	     /     \
            D       H
           / \     / \
          B       F
         / \     / \
        A   C       G
       / \ / \     / \

*/

int count(link h){
    if(h==NULL){
        return 0;
    }
    return count(h->l) + count(h->r) + 1;
}

int height(link h){
    int u, v;
    if(h == NULL){
        return -1;
    }
    u = height(h->l); 
    v = height(h->r);
    if(u>v){
        return u+1;
    } else{
        return v+1;
    }
}
void printnode(char c, int h){
    int i;
    for(i=0;i<h;i++){
        printf(" ");
    }
    printf("%c\n", c);
}

void show(link x, int h){
    if (x == NULL){
        printnode('*',h);
        return;
    } 
    show(x->r, h+1);
    printnode(x->item, h);
    show(x->l, h+1);
}

int main(){
    link root, left, right;

    root = new_node('E',NULL, NULL);
    add_left_leaf(root, 'D');
    add_right_leaf(root, 'H');
    left = root->l;
    add_left_leaf(left, 'B');
    left = left->l;
    add_left_leaf(left, 'A');
    add_right_leaf(left, 'C');
    right = root->r;
    add_left_leaf(right, 'F');
    right = right->l;
    add_right_leaf(right, 'G');

    show(root, 1);

    printf("Number of nodes:%d\n", count(root));
    printf("Height of the tree: %d\n", height(root));

    return 0;

}