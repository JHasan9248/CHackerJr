#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
    int i=0,j=0,size;
    char ary[SIZE],ary2[SIZE];
    printf("Insert a string:");
    gets(ary);
    size=strlen(ary);
    while(ary[i]!='\0')
    {
        ary2[size-j-1]=ary[i];
        i++;
        j++;
    }
    ary2[j]='\0';
    printf("Reversed stirng is :%s",ary2);
    return 0;   
}