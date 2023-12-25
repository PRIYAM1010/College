#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("Pointer before decrementing:%p\n",p);
    p=p-1;
    printf("Pointer after decrementing:%p",p);

}
