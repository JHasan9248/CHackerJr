#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
    int n,t,bit,ans;
    printf("Insert n:");
    scanf("%d",&n);
    printf("Insert t:");
    scanf("%d",&t);
    bit=1<<t;
    bit=~bit;
    ans=(n&bit);
    printf("AFter removing the bit number is %d",ans);
    return 0;
}
