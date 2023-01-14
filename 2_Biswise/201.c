#include<stdio.h>
int main()
{
    int n;
    printf("Insert n:");
    scanf("%d",&n);
    if(n&1)
    {
        printf("LSB is 1");
    }
    else
    {
        printf("LSB is 0");
    }
    return 0;
}
