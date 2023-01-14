#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
    int i,j=0,n,bit;
    printf("Insert n:");
    scanf("%d",&n);
    for(i=0;i<SIZE;i++)
    {
        if((n>>i)&1)
        {
            break;
        }
        j++;
    }
    printf("Trailing zeros is %d",j);
    return 0;

}