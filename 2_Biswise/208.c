#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
    int i,bit,n,j=0;bit;
    printf("Insert n:");
    scanf("%d",&n);
    bit=1<<(SIZE-1);
    for(i=0;i<SIZE;i++)
    {
        if((n<<i)&bit)
        {
            break;
        }
        j++;
    }
    printf("Highest Leading zeros is %d",j);
    return 0;
}