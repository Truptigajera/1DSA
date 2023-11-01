//double ended queue:
#include<stdio.h>
#define n 5
int a[n], f=-1, r=-1;
int display(){
    if(f<0){
        printf("array is empty...");
    }
    else{
        for(int i=f;i<=r;i++)
        printf("%d ",a[i]);
    }
}
int lastinsert(){
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    if(r>n-1){
        printf("\n full queue\n");
    }
    else{
        if(f<0){
            f=r=0;
            a[r]=data;
        }
        else{
            r++;
            a[r]=data;
        }
    }
    
}
int firstdelet(){
    if(f<0){
        printf("empty....");
    }
    else{
        if(f==r){
        f=-1;
        r=-1;}
        else{
            f++;
        }
        printf("\nvalur deletd.");
}}
int firstinsert(){
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    if(r>n-1){
        printf("\n sorry!! do not...\n");
    }
    else{
        if(f<0){
            f=r=0;
            a[f]=data;
        }
        else{
            f--;
            a[f]=data;
        }
    }
    
}
int lastdelet(){
    if(f<0){
        printf("empty....");
    }
    else{
        if(f==r){
        f=-1;
        r=-1;}
        else{
            r--;
        }
        printf("\nvalur deletd.");
}}

int main(){
    int ch;
    printf("1.display.\n");
    printf("2.lastinsert.\n");
    printf("3.firatdelet.\n");
    printf("4.firstinsert.\n");
    printf("5.last delet.\n");
    printf("0.The end");
    do{
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            display();
            break;

            case 2:
            lastinsert();
            break;

            case 3:
            firstdelet();
            break;

            case 4:
            firstinsert();
            break;

            case 5:
            lastdelet();
            break;

            case 0:
            printf("Thank you!!!");
            break;

            default:
            printf("wrong...");
            break;
        }
    }
    while(ch!=0);
}
