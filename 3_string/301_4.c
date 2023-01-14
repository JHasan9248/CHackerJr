#include<stdio.h>
#define SIZE 100
int main()
{
    int count=0;
    char *ptr;
    char ary[SIZE];
    printf("Insert Stirng:");
    gets(ary);
    ptr=ary;
    while(*ptr !='\0')
    {
        count++;
        ptr++;
    }
    printf("Size of lenth %d",count);
}