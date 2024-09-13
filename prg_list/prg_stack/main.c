#include <stdio.h>
#include "stack.h"
#include "../Item.h"

int main(){
    STACKinit(100); //スタックを初期化

    printf("Pushing items onto the stack:\n");
    for(int i=0; i<=5; i++){
        printf("Pushing %d\n", i);
        STACKpush(i);
    }

    printf("\n Popping items from the stack\n");
    while(!STACKempty()){
        Item item = STACKpop();
        printf("Poppeed %d\n", item);
    }

    printf("\nStack is empty;: %s\n", STACKempty() ? "YES" : "NO");


    return 0;


}