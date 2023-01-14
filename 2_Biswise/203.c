#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
    int n,t,after,bit;
    printf("Insert n:");
    scanf("%d",&n);
    printf("Insert nth position that you want to fix ");
    scanf("%d",&t);
    after=(1<<t|n);
    printf("Final number is %d",after);
    return 0;

}
