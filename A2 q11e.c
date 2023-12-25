#include<stdio.h>
int main(){
    int a=100;
    int *p=&a;
    int *temp;
    temp=p;
    p=p+3;
    printf("Pointer subtraction:%d-%d=%d",p,temp,p-temp);

}
