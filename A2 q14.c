#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int size;
    printf("Enter size of elements:");
    scanf("%d",&size);
    p=(int*)malloc(size * sizeof(int));
    if(p==NULL){
        printf("Memory not allocated\n");
            }
            else
            {
                printf("Memory successfully allocated.\n");
            }
for(int j=0;j<size;j++){
    p[j]=j+1;
    }
    printf("The elements of the array are:");
    for(int k=0;k<size;++k){
        printf("%d",p[k]);
    }

}
