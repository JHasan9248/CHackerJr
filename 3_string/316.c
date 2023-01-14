#include<stdio.h>
int main()
{
    char str[100],ch;
    printf("Insert a string:");
    gets(str);
    printf("Insert a character:");
    scanf(" %c",&ch);
    int i=0,check=1;
    while(str[i]!='\0')
    {
        if(ch==str[i] && check==1)
        {
            check++;
            printf("Found:");          
        }
        if(ch==str[i])
        {
            printf("%d, ",i);            
        }
        i++;
    }
    if(check==1)
    {
        printf("Not found");
    }
}