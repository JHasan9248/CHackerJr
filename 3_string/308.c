#include<stdio.h>
#define SIZE 100
int main()
{
    int i,alp=0,dig=0,others=0;
    char ary[SIZE];
    printf("Insert a stirng:");
    gets(ary);
    while(ary[i]!='\0')
    {
        if((ary[i]>='A' && ary[i]<='Z') ||(ary[i]>='a' && ary[i]<='z') )
        {
            alp++;
        }
        else if(ary[i]>='0' && ary[i]<='9')
        {
            dig++;
        }
        else 
        {
            others++;
        }        
        i++;
    }
    printf("Alphabet is %d , digit is %d and special charecter is %d",alp,dig,others);
    return 0;



}