#include<stdio.h>
int main()
{
    char str[100],ch;
    int i=0,idk=-1;
    printf("Insert the string:");
    gets(str);
    printf("Insert a character:");
    scanf(" %c",&ch);
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            idk=i;
            break;            
        }
        i++;
    }
    if(idk==-1)
    {
        printf("Not found");
    }
    else 
    {
        printf("Found and position is %d",idk);
    }
}