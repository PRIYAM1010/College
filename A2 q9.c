#include<stdio.h>
int main()
{
    int a[100];
    int c,n,search;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d integer\n",n);
    for(c=0;c<n;c++){
        scanf("%d",&a[c]);
        
    }
    printf("Enter a number to search:\n");
    scanf("%d",&search);
    for(c=0;c<n;c++){
        if(a[c]==search)
        
        {
            printf("%d is in the array.",search,c+1);
        
    
        break;
        }
    }
        if(c==n)
{            printf("%d is not in the array.",search);
        }  
        return 0;

}
