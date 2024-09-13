#include <stdio.h>
#include "../Item.h"
#include "queue.h"

int main(){
    QUEUEinit();
    printf("Pushing items onto the queue:\n");
    for(int i=0; i<=5; i++){
        printf("Enqueuing %d\n", i);
        QUEUEput(i);
    }

    printf("\n Dequeing items from the queue\n");
    while(!QUEUEempty()){
        Item item = QUEUEget();
        printf("Dequeued %d\n", item);
    }

    printf("\nQueue is empty;: %s\n", QUEUEempty() ? "YES" : "NO");


    return 0;

}