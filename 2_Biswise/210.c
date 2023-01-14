#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
    int n,i,j=0,k=0,bit;
    printf("Insert n:");
    scanf("%d",&n);
    for(i=0;i<SIZE;i++)
    {
        bit=n>>i;
        if(bit&1)
        {
            j++;
        }
        else 
        {
            k++;
        }        
    }
    printf("Total zeros=%d and ones=%d",k,j);
    return 0;

}