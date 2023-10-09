#include<stdio.h>
#define n 5
int a[n],top=-1;
int display(){
    if(top<0){
        printf("array is empty...");
    }
    else{
        for(int i=0;i<=top;i++)
        printf("%d ",a[i]);
        }
    }

int insertEnd(int val){
    if(top>=n-1){
        printf("stack is overflow\n");
    }
    else{
        top++;
        a[top]=val;
    }
}
int delet(){
    if(top>n-1){
        printf("stack overflow\n");

    }
    else
    top--;
}
int firstin(int val){
    if(top>=n-1){
        printf("stack is over\n");
    }
    else{
        top++;
        for(int i=top;i>=0;i--){
            a[i]=a[i-1];}
        a[0]=val;
    }
}
int firstout(){
       
        if(top>n-1){
            printf("stack is over\n");
     }
     else{
        int val;
        for(int i=0;i<=top;i++){
        }
        top--;
       }
}
int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
   insertEnd(40);
   // insertEnd(50);
    //insertEnd(60);
   firstin(50);
    firstout();
    //firstout();
    display();
}