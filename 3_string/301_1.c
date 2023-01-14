#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
    char ary[SIZE];    
    printf("Insert the string:");
    gets(ary);

    printf("%d ",strlen(ary));
    return 0;
}