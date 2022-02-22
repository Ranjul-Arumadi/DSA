#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));

    // head points to first node and also moves along to the other nodes
    head = node1;
    node1->data = 1;
    node1->next = node2;
    node2->data = 2;
    node2->next = node3;
    node3->data = 3;
    node3->next = NULL;

    int i=1;
    while (head!=NULL)
    {
        printf("Data of node %d: %d\n", i++, head->data);
        head = head->next;
    }
    

    return 0;
}
