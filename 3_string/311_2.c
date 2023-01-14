#include<stdio.h>
#define SIZE 100
int main()
{
    int i=0,j=0,k=0,count=0;
    char ary[SIZE],ary2[SIZE];
    printf("Insert a string:");
    gets(ary);
    while(ary[k]!='\0')
    {
        count++;
        k++;
    }
    count--;
    while(ary[i]!='\0')
    {
        ary2[count-j+1]=ary[i];
        i++;
        j++;
    }
    printf("Reversed string is: %s",ary2);
    return 0;
}