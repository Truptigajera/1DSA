#include<stdio.h>
int main(){
    int a=30;
    printf("%d",a++);//1
    printf("%d",++a);//2
    printf("%d %d",a,a++);//3
    printf("%d %d",a,++a);//4
    printf("%d %d",a++,++a);//5
    printf("%d %d",++a,++a);               //6
    printf("%d %d %d",a,++a,++a);//7
    printf("%d %d %d",a++,++a,++a);//8
    printf("%d %d %d",++a,++a,++a);//9
    printf("%d %d %d %d",a,++a,++a,a++);//10/
    printf("%d %d %d %d",a,++a,a++,a++);//11
    printf("%d %d %d %d",a,a++,a++,a++);//12
    printf("%d %d %d %d",a,a++,a++,++a);//13
     printf("%d %d %d %d",a,++a,a++,++a);//14
 printf("%d %d %d %d",a++,++a,a++,++a);//15
 printf("%d %d %d %d",++a,++a,a++,++a);//16
  printf("%d %d %d %d",a,++a,a++,++a);//17

}