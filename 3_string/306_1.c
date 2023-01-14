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
        if(ary[i]>='A' && ary[i]<='Z')
        {
            ary[i]+=32;
        }
        i++;
    }
    printf("All lower cased string is %s",ary);
    return 0;
}