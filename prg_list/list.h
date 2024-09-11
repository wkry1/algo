typedef struct node *link; 
struct node{
    int item;
    link next;
};

link NEW(int, link);
void insertNext(link, link);
link deleteNext(link);
void printList(link);

