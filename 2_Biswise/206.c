#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
    int n,i,order=-1;
    printf("Insert a number:");
    scanf("%d",&n);
    for(i=0;i<SIZE;i++)
    {
        if((n>>i)&1)
        {
            order=i;
            break;
        }

    }
    if(order!=-1)
    {
        printf("%dth bit is the lowest bit",order);
    }
    else
    {
        printf("There is no lowest bit every bit is 0");
    }
    return 0;

}
