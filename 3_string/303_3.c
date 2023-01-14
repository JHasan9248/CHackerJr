#include<stdio.h>
#define SIZE 100
int main()
{
    int i,j;
    char ary[SIZE],ary2[SIZE];
    printf("Insert 1st string:");
    gets(ary);
    printf("Insert 2nd string:");
    gets(ary2);
    i=0;
    while(ary[i]!='\0')
    {
        i++;
    }
    j=0;
    while(ary2[j]!='\0')
    {
        ary[i]=ary2[j];
        i++;
        j++;
    }
    ary[i]='\0';
    printf("Concatenated string is: %s",ary);
}