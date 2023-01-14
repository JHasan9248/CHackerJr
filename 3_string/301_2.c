#include<stdio.h>
#define SIZE 100
int main()
{
    int i,count=0;
    char ary[SIZE];
    printf("Insert the string:");
    gets(ary);

    for(i=0;ary[i]!='\0';i++)
    {
        count++;
    }
    printf("Size of the string is %d",count);
    return 0;
}