#include<stdio.h>
#include<string.h>
int main()
{
    char ary[8],ary2[100];
    printf("Insert string1:");
    gets(ary);
    printf("Insert string2:");
    gets(ary2);
    strncat(ary,ary2,sizeof(ary)-strlen(ary)-1);
    printf("Concatenated string is :%s",ary);
    return 0;
}