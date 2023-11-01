#include<stdio.h>
#define n 5
int a[n],f=-1,r=-1;
int display(){
    int i=f;
    do{
        printf("%d ",a[i]);
        i=(i+1)%n;
    }
    while(i!=(r+1)%n);
}
int lastinsert(){
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    if((r+1)%n==f) {
        printf("\n full queue\n");
    }
    else{
        if(f<0){
            f=r=0;
            a[r]=data;
        }
        else{
            r=(r+1)%n;
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
            f=(f+1)%n;
        }
        printf("\nvalur deletd.");
}}
int main(){
    int ch;
    printf("1.Display:\n");
    printf("2.lastinsert:\n");
    printf("3.firstdelet");
    printf("0.The end..\n");
    do{
        printf("Eneter choice:");
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

        case 0:
        printf("Thank you!!!");
        break;

        default:
        printf("wrong....");
        break;
    }
}
while(ch!=0);
}