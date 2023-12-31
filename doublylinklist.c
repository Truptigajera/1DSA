#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void insertEnd(int val){
    struct node *ptr = head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;

    }
    ptr->next=temp;
    prev->next=head;
    return;
}
void display(){
    struct node *ptr=head;
    if(head==NULL){
        printf("List is empty...\n");
    }
    else{
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n");
}
int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    display();
}