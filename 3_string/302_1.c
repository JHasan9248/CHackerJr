#include<stdio.h>
#define SIZE 100
#include<string.h>
int main()
{
    char ary[SIZE],ary2[SIZE];
    printf("Insert the string:");
    gets(ary);
    strcpy(ary2,ary);
    printf("Copied string is %s ",ary2);
    return 0;

}