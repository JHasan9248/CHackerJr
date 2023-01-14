#include<stdio.h>
#define SIZE 100
int main()
{
    int i=0;
    char ary[SIZE];
    printf("Insert a string:");
    gets(ary);
    while(ary[i]!='\0')
    {
        if(ary[i]>='a' && ary[i]<='z')
        {
            ary[i]-=32;
        }
        i++;
    }
    printf("All upper case lettered string is: %s",ary);
    return 0;
}