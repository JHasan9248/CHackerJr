#include<stdio.h>
int main()
{
    char str[100];
    printf("Insert a string:");
    gets(str);
    int i,j,k;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
                j--;
                str[k]='\0';
            }
        }
    }
    printf("%s",str);
}