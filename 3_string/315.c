#include<stdio.h>
int main()
{
    char str[100],ch;
    int i=0,idk=-1;
    printf("Insert a string:");
    gets(str);
    printf("Insert a character:");
    scanf(" %c",&ch);
    while(str[i]!='\0')
    {
        if(ch==str[i])
        {
            idk=i;
        }
        i++;
    }
    if(idk==-1)
    {
        printf("Not found");
    }
    else 
    {
        printf("Found,Position is %d",idk);
    }
}