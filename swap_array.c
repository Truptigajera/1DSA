#include<stdio.h>
int main(){
    int n,i,a[5],x;

    printf("Enter N:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
        x=a[0];
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        a[i]=a[i+1];
    }
    printf("\n");
    for(i=0;i<n;i++){
        a[4]=x;
        printf("%d ",a[i]);
    }
}