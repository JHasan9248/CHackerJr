#include<stdio.h>
#define SIZE 100
int main()
{
    int i=0,count=0;
    char ary[SIZE];
    printf("Insert the string:");
    gets(ary);
    while(ary[i]!='\0')
    {
        i++;
        count++;
    }
    printf("Size of the lenth:%d",count);
}