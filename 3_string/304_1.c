#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
    char ary[SIZE],ary2[SIZE];
    printf("Insert 1st string:");
    gets(ary);
    printf("Insert 2nd string:");
    gets(ary2);
    if(strcmp(ary,ary2)<0)
    {
        printf("string1 is less than string2");  
    }
    else if(strcmp(ary,ary2)>0)
    {
        printf("string1 is bigger than string2");
    }
    else 
    {
        printf("Both are same");
    }
    return 0;
}