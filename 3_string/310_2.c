#include<stdio.h>
#define SIZE 100
int main()
{
    int count=0,i=0;
    char ary[SIZE];
    printf("Insert a string:");
    gets(ary);
    while(ary[i]!='\0')
    {
        if(ary[i]==' ' || ary[i]=='\n'|| ary[i]=='\t')
        {
            count++;
        }
        i++;
    }
    printf("Number of wond in a string is %d",count+1);
    return 0;

}