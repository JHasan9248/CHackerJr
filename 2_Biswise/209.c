#include<stdio.h>
int main()
{
    int n,flip;
    printf("Insert n:");
    scanf("%d",&n);
    flip=~(n);
    printf("Flipped number is %d",flip);
    return 0;
    
}