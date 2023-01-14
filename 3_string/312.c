#include<stdio.h>
#define SIZE 100
int main()
{
    int i=0,k=0,check=0,count=0;
    char ary[SIZE];
    gets(ary);
    while(ary[k]!='\0')
    {
        count++;
        k++;
    }
    count--;
    while(ary[i]!='\0')
    {
        if(ary[i]==ary[count-i+1])
        {
            check++;
        }
        i++;
    }
    if(check==0)
    {
        printf("The string is pelindrome");
    }
    else 
    {
        printf("The string is not pelindrome");
    }
    return 0;
}