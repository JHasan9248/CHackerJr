#include<stdio.h>
#define SIZE 100
#include<string.h>
int main()
{
    char ary[SIZE],ary2[SIZE];
    printf("Insert 1st string:");
    gets(ary);
    printf("Insert 2nd string:");
    gets(ary2);
    strcat(ary,ary2);
    printf("Concatenated string is %s",ary);
    return 0;
}