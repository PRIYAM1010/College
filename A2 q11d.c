#include<stdio.h>
int main()
{
    int n=10;
    int *p;
    p=&n;
    printf("Pointer before subtraction:%p\n",p);
    p=p-3;
    printf("Pointer after subtraction:%p",p);
}
