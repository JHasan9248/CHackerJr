#include<stdio.h>
#define SIZE 100
int main()
{
    int i;
    char ary[SIZE],ary2[SIZE];
    printf("Insert a string:");
    gets(ary);
    for(i=0;ary[i]!='\0';i++)
    {
        ary2[i]=ary[i];
    }
    printf("Copied string is %s ",ary2);
}