#include<stdio.h>
void main()
{
    int n=10;
    int *p;
    p=&n;
    printf("Pointer before incrementing:%p\n",p);
    p=p+1;
    printf("Pointer after incrementing:%p",p);
}
