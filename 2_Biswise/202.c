#include<stdio.h>
#define SIZE (sizeof(int)*8)
int main()
{

    int bit,n;
    printf("Insert n:");
    scanf("%d",&n);
    bit=(1<<SIZE-1);
    if(n & bit)
    {
        printf("MSB is 1");
    }
    else
    {
         printf("MSB is 0");
    }
    return 0;
}
